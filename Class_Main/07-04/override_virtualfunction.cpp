#include "InputStream.hpp"
#include "ArrayStream.hpp"
#include <iostream>
using namespace std;

bool Average(Stream& stream){
  int count;
  double avr = 0;

  for(count = 0; stream.Set(); ++count){
    avr += stream.Get();
  }
  if(count == 0){
    return false;
  }

  avr /= count;
  cout << "The average is " << avr << endl;
  return true;
}

int main(){
  // InputStream istream;

  // check for override
  // cout << "> " << flush;
  // istream.Set();
  // cout << istream.Get() << endl;

  // Stream stream;

  // stream.Set();
  // cout << stream.Get() << endl;

  // upcase test
  InputStream istream;
  Average(istream);

  static const double ARRAY[] = { 0.5, 1.5, -1 };
  ArrayStream astream(ARRAY);
  Average(astream);

  return 0;
}

