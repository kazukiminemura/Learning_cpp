#include <iostream>
#include <cstdlib>
using namespace std;

class Hoge {
public:
  virtual ~Hoge() {
    cout << "Hoge::~Hoge" << endl;
  }
};

Hoge hoge;

int main(){
  int n;
  cin >> n;
  if(cin.fail()){
    abort();
  }else{
    exit(EXIT_FAILURE);
  }
  cout << "dummy" << endl;
}