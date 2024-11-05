#include "IntArray.h"
#include <iostream>
using namespace std;

void Show(const IntArray& array) {
  cout << array.Size() << endl;
}

int main(){
  // with explicti, the following will be compile error
  Show(5);// this will be Show(IntArray(5))
  IntArray array = 9; // this will be IntArray array(IntArray(9))

  return 0;
}

