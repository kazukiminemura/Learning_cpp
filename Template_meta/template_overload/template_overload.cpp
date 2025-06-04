#include <string>
#include <iostream>

template <typename T>
T operator+(const T& a, const T& b)
{
    // This function overloads the + operator for any type T.
    return a + b;
}

template <>
std::string operator+(const std::string& a, const std::string& b)
{
    // This function overloads the + operator specifically for std::string.
    return a + " " + b;
}

int main()
{
    int x = 5;
    int y = 10;
    
    // Using the overloaded + operator for integers
    int result = x + y; // Calls the operator+ function defined above
    std::cout << result << std::endl;
    
    std::string str1 = "Hello";
    std::string str2 = "World!";
    // Using the overloaded + operator for strings
    std::string strResult = str1 + str2; // Calls the specialized operator+ function for std::string
    std::cout << strResult << std::endl; // Output: Hello, World!


    // Output the result
    return result; // Should return 15
}