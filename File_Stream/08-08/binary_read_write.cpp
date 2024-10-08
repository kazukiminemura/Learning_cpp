#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(){
  fstream file;
  file.open("binary.txt", ios::out | ios::binary);
  if(! file.is_open()){
    return EXIT_FAILURE;
  }

  int n_w = 0x41424344;
  file.write((const char*)&n_w, sizeof n_w);
  file.close();

  file.open("binary.txt", ios::in | ios::binary);
  if(! file.is_open()){
    return EXIT_FAILURE;
  }

  int n_r;
  file.read((char*)&n_r, sizeof n_r);
  file.close();
  cout << n_r << endl;

  return 0;
}


