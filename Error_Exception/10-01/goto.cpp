#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

const char* Run() {
  ifstream file;

  file.open("test.txt");
  if(! file.is_open()){
    return "failed to open the file";
  }

  string line;
  getline(file, line);
  if(file.fail()){
    return "failed to read data from the file";
  }

  cout << line << endl;

  return NULL;
}

int main(){
  // const char* error = Run(); // separated erro process and root of error point
  
  // embedded error prosess
  const char* error = NULL;
  ifstream file;
  string line;

  file.open("test.txt");
  if(! file.is_open()){
    error = "failed to open the file"; 
    goto ON_ERROR;
  }

  if(error != NULL){
    cerr << error << endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;

ON_ERROR:
  cerr << error << endl;
  return EXIT_FAILURE;
}

