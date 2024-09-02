#include <iostream>
using namespace std;


int main(){
  char a;
  char* p;

  p=&a;
  cout << " p = " << (size_t) p << endl
      << "&a = " << (size_t)&a << endl;
  
  return 0;
}
