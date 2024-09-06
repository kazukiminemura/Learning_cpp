#include <iostream>
using namespace std;


int main(){
  int a;
  int* p = &a;

  a = 0;
  cout << " a = " << a << endl
      << " *p = " << *p << endl;
  
  *p = 5;
  cout << " a = " << a << endl
    << " *p = " << *p << endl;

  int b;
  int& r = b;

  b = 0;
  cout << " b = " << b << endl
      << " r = " << r << endl;
  
  r = 5;
  cout << " b = " << b << endl
    << " r = " << r << endl;

  return 0;
}
