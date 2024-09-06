#include <iostream>
using namespace std;

size_t StrLen(char* str){
  size_t i;
  for(i=0; str[i] != '\0'; ++i){
    // nothing
  }
  return i;
}

size_t StrLen_ptr(char* str){
  char* p;
  for(p=str; *p != '\0'; ++p){
    // nothing
  }
  return p - str;
}

size_t StrLen_op(char* str){
  size_t i;
  for(i=0; *(str + i) != '\0'; ++i){
    // nothing
  }
  return i;
}


void ShowLength(char* str){
  cout << "the lenght of string [" << str << "] "
      << StrLen(str) << " bytes." << endl;

  cout << "the lenght of string [" << str << "] "
      << StrLen_ptr(str) << " bytes." << endl;

  cout << "the lenght of string [" << str << "] "
      << StrLen_op(str) << " bytes." << endl;
}

int main(){
  ShowLength("Hello");
  ShowLength("");

  return 0;
}
