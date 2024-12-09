#include <iostream>
#include <string>
using namespace std;

bool Input(double& value){
  cout << "Input a value > " << flush;
  value = 0;
  cin >> value;
  return value != 0;
}

void Show(string* str) {
  if(!(str == NULL || str->empty())){
    cout << *str << endl;
  }
}

int main(){
  double a, b;
  while(Input(a) && Input(b)){ // judge fist the return value of the first.
    cout << "a / b = " << (a/b) << endl
          << "b / a = " << (b/a) << endl;
  }

  Show(NULL);

  string str;
  Show(&str);

  str = "Hoge";
  Show(&str);
}

