#include <iostream>
#include <cmath>
using namespace std;


int main(){
  double a, b;

  cout << "input two edge line length > " << flush;
  cin >> a >> b;

  cout << "The length of the diagonal is " << sqrt(a*a + b*b) << endl;
 
  // may who 1
  for(double i=0.0; i<1; i+=0.1){
    cout << i << ' ';
  }
  cout << endl;

  return 0;
}
