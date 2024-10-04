#include <iostream>
#include <sstream>
using namespace std;

void Add(stringstream& sstr, int x, int y){
  sstr.str("");
  sstr << x << " + " << y << " = " << (x+y) << flush;
}

int main(){
  stringstream sstr;

  Add(sstr, 2, 4);
  cout << sstr.str() << endl;
  Add(sstr, 4, 8);
  cout << sstr.str() << endl;

  stringstream sstr2("1 2");
  int x, y;

  sstr2 >> x >> y;
  cout << x << " + " << y << " = " << (x + y) << endl;

  return 0;
}

