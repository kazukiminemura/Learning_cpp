#include "ArrayStream.hpp"
#include <iostream>
using namespace std;

bool Average(ArrayStream& stream){
  int count;
  double avr = 0;

  for(count = 0; stream.Set(); ++count){
    avr += stream.Get();
  }
  if(count == 0){
    return false;
  }

  avr /= count;
  cout << "the average is " << avr << endl;
  return true;
}

int main(){
  static const double ARRAY1[] = {1, 2, 3, -1};
  static const double ARRAY2[] = {0.5, 1.5, -1};
  static const double ARRAY3[] = {-1};

  static const double* const ARRAY[] = {ARRAY1, ARRAY2, ARRAY3};
  static const int SIZE = sizeof ARRAY/ sizeof *ARRAY;
  
  for(int i=0; i<SIZE; ++i){
    ArrayStream stream(ARRAY[i]);
    if(!Average(stream)){
      break;
    }
  }

  return 0;
}

