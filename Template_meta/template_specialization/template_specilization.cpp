template <typename T>
T function_name(T a, T b)
{
  return (a>b)?a:b;
}

template <>
float function_name<float>(float arg1, float arg2) {
    // Specialized implementation for the specific type or condition
    // ...
    return (arg1 > arg2) ? -arg1 : -arg2;
}


int main() {
    // Example usage of the specialized function
    float value1 = 1.0; // Initialize with appropriate value
    float value2 = 3.0; // Initialize with appropriate value
    float result = function_name(value1, value2);
    
    return 0;
}
