#include <iostream>
using namespace std;

void ShowCode(char ch){
  cout << "[" << ch << "] has characode of "
      << (int) (unsigned char) ch << endl;
}

int main(){
  ShowCode('0');
  ShowCode('A');
}
