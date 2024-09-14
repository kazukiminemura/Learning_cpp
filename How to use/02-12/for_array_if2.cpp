#include <iostream>
using namespace std;

int main(){
  int a = 0;
  for(int i=0; a<10; ++i){
    cout << i << ", " << a << endl;
    a+=2;
  }

  a = 0;
  for(; a<10;){
    cout << a << ' ';
    a+=2;
  }
  cout << endl;

  return 0;
}
