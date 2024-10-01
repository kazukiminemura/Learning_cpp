#include <iostream>
#include <new>
using namespace std;

int main(){
  int* p = new(nothrow) int;

  if(p != NULL){
    *p = 0;
    cout << *p << endl;

    delete p;
  }

}

