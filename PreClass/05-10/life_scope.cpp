#include <iostream>
using namespace std;

int a = 1;

int main(){
  cout << a << " : " << (size_t) &a << endl;

  int a = 2;
  cout << a << " : " << (size_t) &a << endl;

  {
    int a = 2;
    cout << a << " : " << (size_t) &a << endl;
  }

  cout << a << " : " << (size_t) &a << endl;
  return 0;
}

