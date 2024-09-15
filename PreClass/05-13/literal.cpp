#include <iostream>
using namespace std;

enum CompareResult {
  CR_LESS_THAN = 0,
  CR_EQUAL_TO = 1,
  CR_GREATER_THAN = 2
};

CompareResult Compare(int a, int b){
  return 
    a < b ? CR_LESS_THAN:
    a > b ? CR_GREATER_THAN:
            CR_EQUAL_TO;
}

bool Compare(){
  // const char* message[] = {
  // "The former is less then the later",
  // "They are equal",
  // "The former is larger then the later",
  // };

  // only one time initialization
  static const char* message[] = {
  "The former is less then the later",
  "They are equal",
  "The former is larger then the later",
  };

  int a, b;

  cout << "enter two numbers > " << flush;
  cin >> a >> b;

  if(a==-1){
    return false;
  }

  cout << message[Compare(a,b)] << endl;
  return true;
}

int main(){
  while(Compare()){
    // nothing to do
  }
  return 0;
}

