#include "assert.h"

inline void CheckIndex(int i){
  assert(0<= i && i  < 100);
}

int main(){
  int a = 1;
  int b = 120;

  CheckIndex(a);
  CheckIndex(b);

}

