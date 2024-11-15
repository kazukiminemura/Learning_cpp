#include <iostream>
using namespace std;

int main(){
  typedef int* IntPtr;

  int n = 0;

  const IntPtr p = &n;
  IntPtr const q = &n;

  p = &n; // cannot change pointer address
  q = &n;
  *p = 1; // can change the pointing value 
  *q = 2;

  return 0;
}

