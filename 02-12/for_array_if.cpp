#include <iostream>
using namespace std;

int main(){
  for(int i=5; i<10; i+=2){
    cout << i << ' ';
  }
  cout << endl;

  for(int i=10000; i<10; ++i){
    cout << i << ' ';
  }
  cout << endl;

  return 0;
}
