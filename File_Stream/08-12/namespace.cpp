#include <iostream>
using namespace std;

namespace Name1 {
  void Func(){
    cout << "Name1::Func" << endl;
  }
}

namespace Name2 {
  void Func(){
    cout << "Name2::Func" << endl;
  }
}

void Func(){
  cout << "::Func" << endl;
}


int main(){
  Name1::Func();
  Name2::Func();
  ::Func();

  return 0;
}


