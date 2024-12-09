#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

template <typename TYPE>
  size_t ArraySize(TYPE array[])
{
  return sizeof array / sizeof *array;
}

#define ARRAY_SIZE(array) (sizeof (array) / sizeof *(array))

const char* Open(ifstream& file, const char* filename) {
  file.open(filename);
  return file.is_open() ? NULL : "failed to open the file";
}

// get a line from text
const char* GetLine(ifstream& file, string& line) {
  getline(file, line);
  return file.fail() ? "failed to read line" : NULL;
}

#define ON_ERROR_GOTO(expr) \
  error = (expr); \
  if(error != NULL) { \
    goto ON_ERROR; \
  }


int main(){
  int n[100];
  cout << ArraySize(n) << endl; // incorrect result: array[] will be a pointer

  cout << ARRAY_SIZE(n) << endl; // correct result


  const char* error = NULL;
  ifstream file;
  string line;

  ON_ERROR_GOTO(Open(file, "test.txt"));
  ON_ERROR_GOTO(GetLine(file, line));

  return 0;

  ON_ERROR:
    cerr << error << endl;
    return EXIT_FAILURE;
}

