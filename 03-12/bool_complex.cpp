#include <iostream>
using namespace std;

bool IsDigit(char ch){
  return '0' <= ch && ch <= '9';
}

int main(){
  while(true){
    char ch;

    cout << "enter a character > " << flush;
    cin >> ch;

    if(ch=='Q' || ch == 'q'){
      break;
    }

    if(IsDigit(ch)){
      cout << "this is a digit number" << endl;
    } else {
      cout << "this is not a digit number" << endl;
    }

    cout << "end of program" << endl;
  }
  
  return 0;
}
