#include "file_exception.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// open file
// if fail to open, throw OpenFileException
void Open(ifstream& file, const char* filename){
  file.open(filename);
  if(! file.is_open()){
    throw OpenFileException(filename);
  }
}

// get a line from the file
// if fail to open, throw ReadFileException
// void GetLine(ifstream& file, string& line){
//   getline(file, line);
//   if(file.fail()){
//     FileException e ("Failed to read a line from the file");
//     throw e;
//   }
// }
void GetLine(ifstream& file, string& line){
  getline(file, line);
  if(file.fail()){
    ReadFileException();
  }
}


int main(){
  try{
    ifstream file;
    Open(file, "test.txt");

    string line;
    GetLine(file, line);
    cout << line << endl;
  } catch(const FileException& e) {
    cerr << e.What() << endl;
    return EXIT_FAILURE;
  }

  return 0;
}

