#include <iostream>
using namespace std;

// calling forever
// void Forever(){
//   cout << "forever" << endl;
//   Forever();
// }

int i;

void CountDown(){
  if(i > 0){
    cout << i << endl;
    --i;
    CountDown();
  }
}

int main(){
  i = 3;
  CountDown();
}