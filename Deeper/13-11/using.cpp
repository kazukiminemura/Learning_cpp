#include <iostream>
using namespace std;

namespace Hoge {
  using namespace std;

  void Hello() {
    cout << "Hello" << endl;
  }
}

class Show {
public:
  static void Value(char         ch) {cout << ch << endl;}
  static void Value(const char* str) {cout << str << endl;}
};

class Show2 :
  public Show
{
public:
  static void Value(char ch){
    int n = static_cast<unsigned char>(ch);
    cout << n << endl;
  }

  using Show::Value;
};

int main(){
  Hoge::Hello();

  Show2::Value('A');
  Show2::Value("Hoge");
}

