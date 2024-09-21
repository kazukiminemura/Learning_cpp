#include "IntArray.hpp"
#include <iostream>
using namespace std;

int main(){
  IntArray a(5);
  IntArray b(5);
  
  // input a values into a
  for(int i = 0, size = a.Size(); i < size; ++i){
    int n;
    cin >> n;
    a.Set(i ,n);
  }

  // copy the values into b and multiple by 2
  b = a;
  for(int i = 0, size = b.Size(); i < size; ++i){
    b.Set(i, b.Get(i)*2);
  }

  // output a and b values
  for(int i = 0, size = a.Size(); i < size; ++i){
      cout << a.Get(i) << " -> " << b.Get(i) << endl;
  }

  return 0;
}

