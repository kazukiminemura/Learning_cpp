#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(){
  fstream file;

  file.open("test.txt", ios::out);
  if(! file.is_open()){
    return EXIT_FAILURE;
  }

  file << "write into a file" << endl;
  file.close();

  return 0;
}

