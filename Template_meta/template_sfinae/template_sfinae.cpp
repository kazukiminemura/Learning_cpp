#include <iostream> 
#include <type_traits>

template <typename T, typename = void>
struct HasMemberFunction : std::false_type {};

template <typename T>
struct HasMemberFunction<T, std::void_t<decltype(std::declval<T>().member())>> : std::true_type {};

template <typename T>
void SomeFunction(T value) {
    if constexpr (HasMemberFunction<T>::value)
    {
        value.member(); // Call memberFunction if it exists
        std::cout << "member function is exists.\n" << std::endl;
    } 
    else 
    {
        // Handle the case where T does not have memberFunction
        std::cout << "no member function" << std::endl;
    }
}

int main() {
    struct WithMemberFunction {
        void member() {}
    };

    struct WithoutMemberFunction {};

    SomeFunction(WithMemberFunction{}); // This will call memberFunction
    SomeFunction(WithoutMemberFunction{}); // This will not call memberFunction

    return 0;
}