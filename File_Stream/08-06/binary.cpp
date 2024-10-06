#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;


int main(){
  fstream file;

  file.open("test.txt", ios::in | ios::binary);
  if(! file.is_open()){
    return EXIT_FAILURE;
  }

  string str;
  getline(file, str);
  file.close();
  for (int i = 0; i < sizeof(str); i++) {
    cout << str[i] << " ";
  }
  cout << endl;

  return 0;
}

