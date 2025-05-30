#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// open file
// if fail to open the file, throw an exception
void Open(ifstream& file, const char* filename){
  file.open(filename);
  if(! file.is_open()){
    throw "failed to open the file";
  }
}

// get a line from the file
// if fail to get the line, throw an exception
void GetLine(ifstream& file, string& line){
  getline(file, line);
  if(file.fail()){
    throw "failed to read a line from the file";
  }
}

int main(){
  try{
    ifstream file;
    Open(file, "test.txt");

    string line;
    GetLine(file, line);
    cout << line << endl;
  } catch(const char* error) {
    cerr << error << endl;
    return EXIT_FAILURE;
  }

  return 0;
}

