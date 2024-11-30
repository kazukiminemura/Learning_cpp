#include <iostream>
#include <fstream>
#include <sstream>
#include <typeinfo>
using namespace std;

void ShowType(const ostream& ostr) {
  cout << typeid(ostr).name() << endl;
}

void CheckType(const ostream& ostr) {
  const type_info& tiOstr         = typeid(ostr);
  const type_info& tiOstream      = typeid(ostream);
  const type_info& tiOfstream     = typeid(ofstream);
  const type_info& tiCOfstream    = typeid(const ofstream);
  const type_info& tiCROfstream   = typeid(const ofstream&);

  cout << boolalpha;

  cout << "(==)" << endl
      << "ostream         : " << (tiOstr == tiOstream     ) << endl
      << "ofstream        : " << (tiOstr == tiOfstream    ) << endl
      << "const ofstream  : " << (tiOstr == tiCOfstream   ) << endl
      << "const ofstream& : " << (tiOstr == tiCROfstream  ) << endl;

  cout << "(!=)" << endl
      << "ostream         : " << (tiOstr != tiOstream     ) << endl
      << "ofstream        : " << (tiOstr != tiOfstream    ) << endl
      << "const ofstream  : " << (tiOstr != tiCOfstream   ) << endl
      << "const ofstream& : " << (tiOstr != tiCROfstream  ) << endl;
}

int main(){
  fstream fstr;
  ofstream ofstr;
  stringstream sstr;
  ostringstream osstr;

  //show class type string
  ShowType(cout);
  ShowType(fstr);
  ShowType(ofstr);
  ShowType(sstr);
  ShowType(osstr);

  //check class type
  CheckType(ofstr);
}

