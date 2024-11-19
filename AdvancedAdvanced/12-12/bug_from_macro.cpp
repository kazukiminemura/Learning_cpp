#include <iostream>
using namespace std;

#define ON_ERROR_GOTO(flag); if(! (flag)) {goto ON_ERROR;} // 


int main(){
  int a = 0;
  // ok pattern
  // while(true){
  //   ON_ERROR_GOTO(a == 1 ? true: false);
  // }

  //fail patter
  while(true)
    ON_ERROR_GOTO(a == 1 ? true: false); // it becomes while(ture);

  ON_ERROR:
    std::cout << "error" << std::endl;
}

