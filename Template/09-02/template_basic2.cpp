#include <iostream>
using namespace std;

template <typename TYPE>
  void FillArray(TYPE* array, size_t size, TYPE value)
{
    for(size_t i=0;i<size;++i){
      array[i]=value;
    }
}

template <typename TYPE_A, typename TYPE_B>
  void Show(TYPE_A a, TYPE_B b){
    cout << "a: " << a << endl
        << "b: " << b << endl;
  }

int main(){
  int array[20];
  size_t size=20;
  int value=1;
  FillArray(array, size, value);

  double array_d[20];
  size_t size_d=20;
  double value_d=2.0;
  FillArray(array_d, size_d, value_d);

  Show(-2.0f, 109);

  return 0;
}

