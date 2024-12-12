#include "Debug.h"

#ifdef NDEBUG // release mode

#else // debug mode

#include <iostream>
#include <cstdlib>
using namespace std;

namespace Debug {
  void Assert(bool b, const char* file, int line) {
    if(b) {
      // this condition must be true
    } else {
      // if not, will out put fine name and line number
      cerr << file << '(' << line << ")"
          << ": Assertion Error!" << endl;
      exit(EXIT_FAILURE);
    }
  }
}

#endif // ifdef NDEBUG

int main(){
   int a = 10;
   ASSERT(0 <= a && a < 100);

   int b = -1;
   ASSERT(0 <= b && b < 100);
}