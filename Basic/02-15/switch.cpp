#include <iostream>
using namespace std;

int main(){
  for(int i=0; i<5; ++i){
    int a, b, op, result;

    cout << "1st integer value > " << flush;
    cin >> a;
    cout << "2nv integer value > " << flush;
    cin >> b;
    cout << "1: add, 2: substraction, 3: multiplication, 4: divide > " << flush;
    cin >> op;

    switch(op){
    case 1:
      result = a + b; break;
    case 2:
      result = a - b; break;
    case 3:
      result = a * b; break;
    case 4:
      result = a / b; break;
    default:
      cout << "please select right operation" << endl;
      continue;
    }

    cout << "answer is " << result << endl;
  }
  
  return 0;
}
