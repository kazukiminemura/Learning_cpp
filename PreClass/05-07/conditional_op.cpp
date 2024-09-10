#include <iostream>
using namespace std;

int main(){
  int a, b;

  cout << "enter two vlaues > " << flush;
  cin >> a >> b;

  cout << "The larger number is " << (a > b ? a : b) << endl;

  return 0;
}

