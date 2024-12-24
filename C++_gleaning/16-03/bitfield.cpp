#include <iostream>
using namespace std;


int main(){
  union {
    unsigned int i;
    unsigned int b4 : 4;
  };

  i = 0x12345678;
  cout << b4 << endl; // show low 4 bits: this depends on system
}