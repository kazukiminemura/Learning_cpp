#include <iostream>
using namespace std;

inline int ReturnDouble(const int value){
  return value*2;
}

int main(){
  int value = 100;
  // ReturnDouble(value) will be value*2
  cout << ReturnDouble(value) << endl;
  
  return 0;
}

