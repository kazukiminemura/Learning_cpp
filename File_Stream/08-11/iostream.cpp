#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

bool SkipOnError(istream& istr){
  if(istr.fail()){
    if(istr.eof()){
      exit(EXIT_FAILURE);
    }

    // skip a character
    char ch;
    istr.clear();
    istr >> ch;
    return true;
  } else {
    return false;
  }
}


int main(){
  // iostream class
  int n;
  do {
    cin >> n;
  } while (SkipOnError(cin));

  cout << "input value is " << n << endl;

  // iomanip class
  fstream m_file;
  string filename;
  cout << "Filename > " << flush;
  cin >> filename;
  m_file.open(filename.c_str(), ios::in | ios::binary);
  unsigned char buf[16];
  m_file.read((char*)buf, sizeof buf);
  
  cout << setfill('0') << hex << uppercase;
  for(int w=0, size=m_file.gcount(); w<size;  ++w){
    cout << setw(2) << (int)buf[w] << ' ';
  }
  cout << endl;
  m_file.close();

  return 0;
}


