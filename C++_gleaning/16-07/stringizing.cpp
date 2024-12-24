#include <cstdio>
#include <cstdlib>
using namespace std;

#ifdef NODEBUG // Release mode

#define ASSERT(b) ((void)0)

#else // Debug mode

#define ASSERT(b) Debug::Assert((b), __FILE__, __LINE__, #b)

namespace Debug {
  void Assert(bool b, const char* file, int line, const char* expr){
    if(b){
      // this condition must be true always
    } else {
      // printf output with standard error
      fprintf(stderr,
        "%s (%d): condition \"%s\" is not meeted.",
        file, line, expr);
      abort();
    }
  }
}

#endif

int main(){
  int i = 0;
  ASSERT(i == 0);
  ASSERT(i > 0);
}