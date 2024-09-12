#include <iostream>
using namespace std;

void Func(int a = 0){ cout << (size_t)&a << endl;}
void Func2()        { Func();}

int main(){
  Func();
  Func2();
  Func();
}

