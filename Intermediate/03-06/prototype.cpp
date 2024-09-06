#include <iostream>
using namespace std;

int f(int x, int y);

// usually code is written in accending order
void Func1();
void Func2();
void Func3();
void Func4();
void Func5();
void Func6();

// protype is easy to read program flow from top to bottom at main.
int main(){
  cout << "f(1,2) = " << f(1,2) << endl;
  cout << "f(182,144) = " << f(182,144) << endl;

  Func1();
  
  return 0;
}

int f(int x, int y){
  return 2*x + y;
}

void Func1(){ Func2(); };
void Func2(){ Func3(); };
void Func3(){ Func4(); };
void Func4(){ Func5(); };
void Func5(){ Func6(); };
void Func6(){
  cout << "great jobs!!!" << endl; 
}
