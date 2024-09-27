#include "InputStream.hpp"
#include <iostream>
using namespace std;

int main(){
  Stream stream;

  stream.Set();
  cout << stream.Get() << endl;

  InputStream istream;

  // check for override
  cout << "> " << flush;
  istream.Set();
  cout << istream.Get() << endl;

  return 0;
}

