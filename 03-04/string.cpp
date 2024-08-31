#include <iostream>
using namespace std;

int main(){
  char hello[] = "Hello!";

  cout << "[" << hello << "] is converted into " << endl;

  for(int i=0; i < (int)sizeof hello; ++i){
    cout << (int)(unsigned char) hello[i] << ", ";
  }
  cout << endl
      << "... and string size is " << sizeof hello << endl;

  return 0;
}
