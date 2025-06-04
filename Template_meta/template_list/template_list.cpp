#include <iostream>
template <typename... Ts>
struct CompileTimeList
{
};

using Mylist = CompileTimeList<int, double, char>;


template <typename TList>
struct Length;

template <typename... Ts>
struct Length<CompileTimeList<Ts...>>
{
    static constexpr int value = sizeof...(Ts);
};

template <typename TList>
struct Front;

template <typename T, typename... Ts>
struct Front<CompileTimeList<T, Ts...>>
{
    using type = T;
};

template <typename TList>
struct PopFront;

template <typename T, typename... Ts>
struct PopFront<CompileTimeList<T, Ts...>>
{
    using type = CompileTimeList<Ts...>;
};

template <typename TList>
struct Sum;

template <typename... Ts>
struct Sum<CompileTimeList<Ts...>>
{
    static constexpr int value = (0 + ... + sizeof(Ts));
};



int main()
{
    // This is a simple demonstration of a compile-time list using template metaprogramming.
    // The CompileTimeList struct can hold any number of types, and Mylist is an instance of it with specific types.
    
    // The following line is just to ensure the code compiles without any errors.
    // It doesn't do anything meaningful in this context.
    Mylist myList;

    Sum<Mylist> sum; // This will compute the sum of the sizes of the types in Mylist
    std::cout << "Sum of sizes: " << sum.value << std::endl; // Output the sum of sizes of types in Mylist

    // Output the size of the list (which is 0 since we don't have any member functions to count types)
    return 0; // Should return 0
}