template <typename T>
constexpr T meta_function(T a, T b) {
  // process when compiling
    return a + b;
}


template <int N>
struct MyStruct
{
  static constexpr int value = meta_function(N, N); // this will be evaluated at compile time
};


int main() {
    int result = meta_function(3, 4); // This will be evaluated at execution time
    return 0;
}
