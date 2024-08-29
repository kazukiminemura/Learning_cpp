#include <iostream>
using namespace std;

int f(int x, int y){
  return 2 * x + y;
}

void Show(int x, int y){
  cout << "f(" << x << ", " << y << ") =" << f(x, y) << endl;
}


int main(){
  Show(1, 2);
  Show(182, 144);
  
  return 0;
}
