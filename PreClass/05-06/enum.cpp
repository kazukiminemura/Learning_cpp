#include <iostream>
#include <cstring>
using namespace std;

enum CompareResult {
  CR_LESS_THAN = 0,
  CR_EQUAL_TO = 1,
  CR_GREATER_THAN = 2
};

CompareResult Compare(int a, int b){
  if(a < b){
    return CR_LESS_THAN;
  } else if (a > b){
    return CR_GREATER_THAN;
  } else {
    return CR_EQUAL_TO;
    // return 3; // build error, because ComapreResult can have only 0, 1, 2
  }
}

bool Compare(){
  int a, b;

  cout << "enter two intergers > " << flush;
  cin >> a >> b;

  if(a == -1){
    return false;
  }

  switch(Compare(a, b)){
    case CR_LESS_THAN:
      cout << "former is less than later" << endl;
      break;
    case CR_EQUAL_TO:
      cout << "they are equal" << endl;
      break;
    case CR_GREATER_THAN:
      cout << "fotmer is greater than later" << endl;
      break;
  }

  return true;
}

enum ArraySize {WIDTH = 20, HEIGHT = 40};

int main(){
  int array[WIDTH * HEIGHT];
  for(int i=0; i<WIDTH; ++i){
    for(int j=0; j<HEIGHT; ++j){
        array[(i-1)*WIDTH+(j-1)] = i * j;
    }
  }

  while(Compare()){
    // nothing to do
  }

  return 0;
}

