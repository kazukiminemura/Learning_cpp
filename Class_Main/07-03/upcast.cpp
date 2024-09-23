#include "InputStream.hpp"
#include "ArrayStream.hpp"
#include <iostream>
using namespace std;

void Show(const Stream& stream) {
  cout << stream.Get() << endl;
 }

int main(){
  InputStream istream;
  cout << "> " << flush;
  istream.Set();
  Show(istream);


  static const double ARRAY[] = { 3, -1};
  ArrayStream astream(ARRAY);

  astream.Set();
  Show(astream);
  
  return 0;
}

