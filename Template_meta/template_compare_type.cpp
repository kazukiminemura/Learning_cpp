#include <type_traits>

// Base template for comparison
template <typename T, typename U>
struct is_same : std::false_type {};

// Same type specialization
template <typename T>
struct is_same<T, T> : std::true_type {};

// adde const meta function
template<typename T>
struct add_const{
	using type = T const;
};

// adde pointer meta function
template<typename T>
struct add_pointer{
	using type = T*;
};

template<typename T>
struct remove_pointer {
    using type = T;
};

template<typename T>
struct remove_pointer<T*> {
    using type = T;
};

template<typename T>
struct remove_const {
    using type = T;
};
template<typename T>
struct remove_const<T const>
{
    using type = T;
};

//
// FizzBuzz
//
struct Fizz{};
struct Buzz{};
struct FizzBuzz{};
// return this type if T is not Fizz, Buzz or FizzBuzz
template<int N>
struct int_{};

// if else template meta function
template<bool Cond, typename Then, typename Else>
struct if_ {
    using type = Then;
};

template<typename Then, typename Else>
struct if_<false, Then, Else> {
    using type = Else;
};

template<int N>
struct fizzbuzz {
    using type = typename if_<N % 15 == 0, FizzBuzz,
                typename if_<N % 3 == 0, Fizz,
                typename if_<N % 5 == 0, Buzz,
                int_<N> >::type >::type >::type;
};


int main() {
    // ::value is defined by std::true_type and std::false_type
    static_assert(is_same<int, int>::value      == true, "");
    static_assert(is_same<int, float>::value    == false, "");
    static_assert(is_same<int, const int>::value == false, "");

    // add const
    static_assert(is_same<add_const<int>::type, int const>::value, "");
    static_assert(is_same<add_const<int*>::type, int* const>::value, "");
    static_assert(is_same<add_const<int const>::type, int const>::value, "");

    // add pointer
    static_assert(is_same<add_pointer<int>::type, int*>::value, "");
    static_assert(is_same<add_pointer<void>::type, void*>::value, "");
    static_assert(is_same<add_pointer<float*>::type, float**>::value, "");

    // combined case
    static_assert(is_same<add_pointer<add_const<int>::type>::type, int const*>::value, "");

    // remove pointer
    static_assert(is_same<remove_pointer<int*>::type, int>::value, "");
    static_assert(is_same<remove_pointer<int**>::type, int*>::value, "");
    static_assert(is_same<remove_pointer<int>::type, int>::value, "");

    // remove const
    static_assert(is_same<remove_const<int const>::type,    int>::value, "");
    static_assert(is_same<remove_const<int* const>::type,   int*>::value, "");
    static_assert(is_same<remove_const<int>::type,          int>::value, "");

    // FizzBuzz template meta function
    static_assert(is_same<if_<true, int, float>::type, int>::value, "");
    static_assert(is_same<if_<false, int, float>::type, float>::value, "");

    // FizzBuzz tests
    static_assert(is_same<fizzbuzz<1>::type,  int_<1>>::value, "");
    static_assert(is_same<fizzbuzz<2>::type,  int_<2>>::value, "");
    static_assert(is_same<fizzbuzz<3>::type,  Fizz>::value, "");
    static_assert(is_same<fizzbuzz<4>::type,  int_<4>>::value, "");
    static_assert(is_same<fizzbuzz<5>::type,  Buzz>::value, "");
    static_assert(is_same<fizzbuzz<6>::type,  Fizz>::value, "");
    static_assert(is_same<fizzbuzz<10>::type, Buzz>::value, "");
    static_assert(is_same<fizzbuzz<15>::type, FizzBuzz>::value, "");
    static_assert(is_same<fizzbuzz<30>::type, FizzBuzz>::value, "");

    return 0;
}


