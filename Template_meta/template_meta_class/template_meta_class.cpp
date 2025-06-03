template <typename T, typename U> // primary class template
class MetaClass {
public:
    // member variable evaluated at compile time
    static constexpr T value = 42;

    // member function evaluated at compile time
    static constexpr int meta_funcion(T arg) {
        // process evaluation at compile time

        // This function returns the value of the member variable
        return value;
    }
};


template <> // class template specialization for double type
class MetaClass<double, double> {
public:
    // member variable evaluated at compile time
    static constexpr double value = 3.14;

    // member function evaluated at compile time
    static constexpr double meta_funcion(double arg) {
        // process evaluation at compile time

        // This function returns the value of the member variable
        return value;
    }
};

template <typename T> // class template partial specialization
class MetaClass<float, T> {
public:
    // member variable evaluated at compile time
    static constexpr int value = 33;

    // member function evaluated at compile time
    static constexpr float meta_funcion(float arg) {
        // process evaluation at compile time

        // This function returns the value of the member variable
        return value;
    }
};




int main(){
    MetaClass<int, int> meta_instance;

    MetaClass<float, float> meta_instance2;

    MetaClass<double, double> specilization_instance;

    MetaClass<float, int> partial_instance;
}
