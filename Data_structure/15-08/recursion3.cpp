#include <iostream>
#include <string>
using namespace std;

// pattern matching
bool Match(
  const char* str, // being juding string
  const char* pat) // pattern string
{
  // loop until end of string
  for(; !(*str == '\0' || *pat == '\0'); ++str, ++pat){
    if(*pat == '*'){
      // if wildcard "*"
      for(++pat; *pat != *str; ++str){
        // if it does not match until end of string, then it fails
        if(*str == '\0'){
          return false;
        }
      }
    } else {
      // normal character case
      if(*pat != *str){
        return false;
      }
    }
  }

  // str or pat has reached to the end
  return *pat == *str;
}

bool Input(string& str){
  cout << "> * " << flush;
  getline(cin, str);
  return ! (cin.fail() || str == "");
}

int main(){
  static const char PAT[] = "*.txt";

  cout << PAT << " is matching pattern" << endl;

  string str;
  while(Input(str)){
    cout << (Match(str.c_str(), PAT) ?
              "matched":
              "unmatched")
        << endl;
  }
}