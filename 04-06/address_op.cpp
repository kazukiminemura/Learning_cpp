#include <iostream>
using namespace std;


int main(){
  int n[5];

  cout << "&n[2]     = " << (size_t)&n[2]   << endl;
  cout << "&n[2] + 1 = " << (size_t)(&n[2] + 1)   << endl;
  cout << "&n[3]     = " << (size_t)&n[3]   << endl;
  

  int* p = n;
  cout << "p        : " << (size_t)p << endl
      << "&n[0]    : " << (size_t)&n[0] << endl;
  
  p += 2;
  cout << "p    : " << (size_t)p << endl
      << "&n[2]   : " << (size_t)&n[2] << endl;

  return 0;
}
