#include <iostream>
using namespace std;

void CountDown(int count){
  if(count > 0){
    cout << count << endl;
    CountDown(count -1 );
  }
}

int main(){
  CountDown(3);
  CountDown(2);
}