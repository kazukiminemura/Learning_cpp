#include <iostream>
using namespace std;

int main(){
  int a = 0;
  // infinity loop: Ctrl+C to stop
  for(; ;){
    cout << a << ' ';
    a+=2;
  }
  cout << endl;

  return 0;
}
