#include <iostream>
#include <bitset>
using namespace std;

int main(){
  auto a = 0b01111010;
  auto b = 0b00001111;

  auto c = a | b;
  cout << "a: " << bitset<8>(a) << endl;
  cout << "b: " << bitset<8>(b) << endl;
  cout << "c = a | b: " << bitset<8>(c) << endl;

  c = a ^ b;
  cout << "c = a ^ b: " << bitset<8>(c) << endl;


  return 0;
}

