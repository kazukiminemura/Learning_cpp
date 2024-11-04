#include <iostream>
#include "fraction.h"
using namespace std;


int main(){
  double n = 1.1;
  Fraction f(1.5, 1.1);

  cout << "n*f = " << n*f << endl;
  cout << "f*n = " << f*n << endl;

  return 0;
}

