#include <iostream>
using namespace std;

void CountDown(int count){
  if(count > 0){
    cout << count << endl;
    CountDown(count -1 );
  }
}

unsigned int Factorial(unsigned int n){
  return n == 0 ? 1 : n * Factorial(n -1);
}

int main(){
  CountDown(3);
  CountDown(2);

  for(int i = 0; i < 9; ++i){
    cout << i << "! = " << Factorial(i) << endl;
  }
}