#include <iostream>
using namespace std;

void Hoge(){
  volatile int n = 1;  // value n always sets at memory.
  if(n){
    cout << n << endl;
  }
}

int main(){
  Hoge();
}