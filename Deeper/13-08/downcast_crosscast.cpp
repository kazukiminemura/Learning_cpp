#include <iostream>
#include <sstream>
#include <string>
#include <typeinfo>
using namespace std;

string Hoge(ostream& ostr){
  try {
    ostringstream& sstr = dynamic_cast<ostringstream&>(ostr);

    sstr.str("");
    sstr << "Hoge" << flush;
    return sstr.str();
  } catch (const bad_cast& e){
    return "Error!";
  }
}

string Hoge_ptr(ostream& ostr){
  ostringstream* sstr = dynamic_cast<ostringstream*>(&ostr);

  if(sstr != NULL){
    sstr->str("");
    *sstr << "Hoge" << flush;
    return sstr->str();
  } else {
    return "Error!";
  }
}

int main(){
  ostringstream sstr;
  cout << Hoge(sstr) << endl;
  cout << Hoge(cout) << endl;

  // pointer case
  cout << Hoge(sstr) << endl;
  cout << Hoge(cout) << endl;
}

