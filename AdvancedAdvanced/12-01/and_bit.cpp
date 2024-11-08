#include <iostream>
#include <bitset>
using namespace std;

int main(){
  int a = 01111010;
  int b = 00001111;
  int c;

  c = a & b;
  cout << "a: " << bitset<8>(a) << endl;
  cout << "b: " << bitset<8>(b) << endl;
  cout << "c = a & b: " << bitset<8>(c) << endl;
  
  return 0;
}

