#include <iostream>
#include <cstdio>
using namespace std;

void DumpCode(const char* str){
  for(int i=0; str[i] != '\0'; ++i){
    printf("%02X ", (unsigned char) str[i]);
  }
  cout << endl;
}

int main(){
  DumpCode("\"\'\?\\");
  DumpCode("\a\b\t\n\v\f\r");
  DumpCode("\xAB" "\x0AB" "\xA" "B");
  DumpCode("c:\new\abc");
  DumpCode("c:\\new\\abc");

  return 0;
}

