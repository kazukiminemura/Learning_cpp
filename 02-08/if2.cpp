#include <iostream>
using namespace std;

void Divide(){
  int a, b;

  cout << "enter 1st integer value > " << flush;
  cin >> a;

  cout << "enter 2nd integer value > " << flush;
  cin >> b;

  if(b==0){
    cout << "You can't divide by zero!!" << endl;
  }else{
    cout << a << " / " << b << " = "
         << a / b << " ... " << a % b << endl;
  }
}


int main(){
  Divide();
  Divide();
  
  return 0;
}
