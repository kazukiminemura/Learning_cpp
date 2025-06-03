#include <iostream>
#include <typeinfo>


template <typename T, typename U>
class ClassName
{
  // class member
public:
  void print(){
    std::cout << typeid(T).name() << " " << typeid(U).name() << std::endl;
  }
};

template <typename T>
class ClassName<T, double>
{
  // the case for second parameter being double
public:
  void print(){
    std::cout << typeid(T).name() << " " << typeid(double).name() << std::endl;
  }
};

int main() {
  ClassName<int, float> templeInstance; // Instance with one template parameter
  ClassName<int, double> parcialSpecializaedInstance; // Instance with two template parameters

  templeInstance.print(); // Calls the print method of the first template
  parcialSpecializaedInstance.print(); // Calls the print method of the second template

  // You can use the instances as needed
  return 0;
}
