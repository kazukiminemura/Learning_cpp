#include <iostream>
#include <string>
using namespace std;

int main(){
  string hello = "Hello!";

  cout << hello << endl;

  hello = "hello";
  hello += ", world!";

  cout << "[" << hello << "]'s character codes are" << endl;

  for(int i=0, size=hello.size(); i<size; ++i){
    cout << (int)(unsigned char)hello[i] << ", ";
  }

  cout << endl;

  return 0;
}

