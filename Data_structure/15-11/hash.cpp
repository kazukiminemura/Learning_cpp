#include "hash.h"
#include <iostream>
#include <string>
using namespace std;

typedef Hash<string, string> Setting;

bool Input(string& key){
  cout << "input string > " << flush;
  key = "";
  getline(cin, key);
  return ! key.empty();
}

void Check(const Setting& setting, const string& key){
  try{
    cout << setting[key] << endl;
  } catch (const out_of_range& e) {
    cerr << e.what() << endl;
  }
}


int main(){
  Setting setting;

  setting["Type"] = "Rectangle";
  setting["Size"] = "1024x768";
  setting["Color"] = "Green";

  string key;
  while(Input(key)){
    Check(setting, key);
  }
}