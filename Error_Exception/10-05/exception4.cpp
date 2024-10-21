#include <iostream>
using namespace std;

// throwing error in catch section
void Error(){
  int* p = NULL;

  try{
    p = new int[10];
    throw "error occured";
    delete[] p;
  } catch(...){// Exception rethrow
    cerr << "release memory" << endl;
    delete[] p;
    throw;
  }
}

int main(){
  try{
    Error();
  } catch(const char* error) {
    cerr << "error" << endl;
  }

  return 0;
}

