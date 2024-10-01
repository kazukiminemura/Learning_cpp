#include "InputStream.hpp"
#include <iostream>
using namespace std;

int main(){
  InputStream stream(100);
  cout << stream.Get() << endl;

  int x(3);
  cout << x << endl;

  return 0;
}

