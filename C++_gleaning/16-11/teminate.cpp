#include <iostream>
#include <exception>
using namespace std;

void OnTerm(){
  cerr << "abnormal termination" << endl;
}

int main(){
  set_terminate(OnTerm);
  throw exception();
}