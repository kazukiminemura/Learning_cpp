#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
  try{
    ifstream file;

    file.open("test.txt");
    if(! file.is_open()){
      throw "failed to open the file";
    }

    string line;
    getline(file, line);
    if(file.fail()){
      throw "failed to read line from the file";
    }

    cout << line << endl;
  } catch(const char* error) {
    cerr << error << endl;
    return EXIT_FAILURE;
  }

  return 0;
}

