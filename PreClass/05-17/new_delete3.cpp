#include <iostream>
using namespace std;


// when should we use dynamic memory allocation?
// 1. for free size is array
// 2. for larger memory size
// 3. for under control memory life time

int main(){
  int* array;
  int size;

  cout << "enter size of memory > " << flush;
  cin >> size;

  array = new int[size];
  if(array != NULL){
    if(sizeof(array) < size){
      cout << "Beyonod memory allocation" << endl;
    }
    cout << size << " of int memory allocation is successful " << endl;
  }
  
  delete[] array;
}

