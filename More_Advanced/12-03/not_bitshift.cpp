#include <iostream>
#include <bitset>
using namespace std;

int main(){
  auto a = 0b01111010;
  auto b = 0b00001111;

  auto c = a * ~b;
  cout << "a: " << bitset<8>(a) << endl;
  cout << "b: " << bitset<8>(b) << endl;
  cout << "=== set lower 4 bits of a value to zero ===" << endl;
  cout << "c = a & ~b: " << bitset<8>(c) << endl;

  cout << "=== left bitshit a value  ===" << endl;
  cout << bitset<8>(a << 2) << endl;
  cout << "=== right bitshit a value  ===" << endl;
  cout << bitset<8>(a >> 4) << endl;

  return 0;
}

