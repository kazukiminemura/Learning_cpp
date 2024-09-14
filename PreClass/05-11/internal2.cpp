#include <iostream>
using namespace std;

static int a = 9;

void Func1(){
  cout << "a(2) = " << a << endl;
}

void Func2();

int main(){
  Func1();
  Func2();
  a = 5;
  Func1();
  Func2();

  return 0;
}

