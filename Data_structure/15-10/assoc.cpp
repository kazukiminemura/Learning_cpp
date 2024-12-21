#include "assoc.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef Assoc<int, string> AssocIS;

bool Input(int& n){
  cout << "input value > " << flush;
  n = 0;
  cin >> n;
  return n > 0;
}

void Check(const AssocIS& assoc, int n){
  try{
    cout << assoc[n] << endl;
  } catch (const out_of_range& e) {
    cerr << e.what() << endl;
  }
}


int main(){
  AssocIS assoc;

  assoc[42] = "Hoge";
  assoc[25] = "Foo";
  assoc[89] = "Bar";
  assoc[11] = "Baz";

  int n;
  while(Input(n)){
    Check(assoc, n);
  }
}