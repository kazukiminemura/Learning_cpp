#include <iostream>
using namespace std;


template <typename TYPE>
  void FillArray(TYPE* array, size_t size, TYPE value)
{
  for(size_t i = 0; i < size; ++i){
    array[i] = value;
  }
}

template <typename TYPE>
  void ShowAraray(TYPE* array, size_t size)
{
  for(size_t i = 0; i < size; ++i){
    cout << array[i] << ' ';
  }
  cout << endl;
}

int main(){
  const int SIZE = 3;
  int i[SIZE];
  double d[SIZE];

  FillArray(i, SIZE, 0);
  FillArray<double>(d, SIZE, 0); // <datetype> indicate data type for the template

  ShowAraray(i, SIZE);
  ShowAraray(d, SIZE);

  return 0;
}

