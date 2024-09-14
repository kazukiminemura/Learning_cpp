#include <iostream>
using namespace std;

int main(){
  int a=0;

  // add 2
  a+=2;
  cout << "a+=2   -> a=" << a << endl;

  // increment
  ++a;
  cout << "a+=2   -> a=" << a << endl;

  // complex calculation
  a=a*5+2;
  cout << "a=a*5+2-> a=" << a << endl;

  return 0;
}
