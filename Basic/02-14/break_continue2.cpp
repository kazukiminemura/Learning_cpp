#include <iostream>
using namespace std;

int main(){

  for(int i=0; i<5; ++i){
    int a, b;

    cout << "enter 1st integer value > " << flush;
    cin >> a;

    cout << "enter 2nd integer value > " << flush;
    cin >> b;

    if(b==0){
      cout << "it cannot divide by zero" << endl;
      continue;
    }

    cout << a << " / " << b << " = "
          << a / b << " ... " << a % b << endl;
  }
  cout << "this program ends" << endl;
  
  return 0;
}
