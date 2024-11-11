#include <iostream>
#include <bitset>
using namespace std;

int Bit(int x){
  return 1 << x;
}

const int SHOW_X = Bit(0);
const int SHOW_Y = Bit(1);
const int SHOW_Z = Bit(2);


int main(){
  int flags = 0b00001010;

  cout << bitset<8>(flags | SHOW_Y) << endl;
  cout << bitset<8>(flags | SHOW_X | SHOW_Y) << endl;
  cout << bitset<8>(flags & ~SHOW_Y) << endl;
  
  return 0;
}

