#include <iostream>
using namespace std;

class Base {
public:
  virtual ~Base() { }
  virtual void Hoge() {
    cout << "Base::Hoge" << endl;
  }
};

class Derived :
  public Base
{
public:
  virtual void Hoge() {
    cout << "Derived::Hoge" << endl;
  }
};

void CallHoge(Base& b) {
  void (Base::*mfp)() = &Base::Hoge;
  (b.*mfp)();
}

int main(){
  Derived d;
  CallHoge(d);
}

