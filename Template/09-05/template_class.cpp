#include <iostream>
#include <string>
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
    cout << array[i] << endl;
  }
}

template <typename TYPE>
  TYPE Abs(TYPE a)
{
  return a < 0 ? -a : a;
}


int main(){
  const int SIZE = 3;
  string str[SIZE];

  FillArray<string>(str, SIZE, "hoge");
  ShowAraray(str, SIZE);

  // cout << Abs(str) << endl; // error 

  return 0;
}

