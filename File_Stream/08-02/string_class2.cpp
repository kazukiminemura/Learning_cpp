#include <iostream>
#include <string>
using namespace std;

int main(){
  while(true){
    string line;

    cout << "enter a string > " << flush;
    getline(cin, line);
    if(line == "quit"){
      break;
    }

    string::size_type pos = line.rfind(".");

    if(pos == string::npos){
      line += "arune.";
    } else {
      line.insert(pos, "arune");
    }

    cout << line << endl;
  }

  return 0;
}

