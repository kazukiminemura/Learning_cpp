#include <iostream>
using namespace std;

int main(){
  char hello[] = "Hello!";


  hello[4] = '\0';
  cout << "[" << hello << "] is converted into " << endl;

  for(int i=0; hello[i] != '\0'; ++i){
    cout << (int)(unsigned char) hello[i] << ", ";
  }
  cout << 0 << endl
      << "... and string size is " << sizeof hello << endl;

  return 0;
}
