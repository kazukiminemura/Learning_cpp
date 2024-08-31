#include <iostream>
#include <cstdio>
using namespace std;


int f(int x, int y){
  return 2*x + y;
}

void Show(int x, int y){
  char str[50];

  sprintf(str, "f(%d, %d) = %d", x, y, f(x,y));
  cout << str << endl;
}

int main(){
  Show(1,2);
  Show(182,144);

  return 0;
}
