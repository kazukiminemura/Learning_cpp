#include <iostream>
using namespace std;

extern "C" int StrCount(const char* str, char ch);

int main(){
  cout << StrCount("HogeHoge", 'H') << endl;
}