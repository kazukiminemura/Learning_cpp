#include <iostream>
using namespace std;

namespace Name1 {
  void Func(){
    cout << "Name1::Func" << endl;
  }
  void Hoge(){
    cout << "Name1::Hoge" << endl;
  }
}

namespace Name2 {
  void Func(){
    cout << "Name2::Func" << endl;
  }
}

namespace Foo{
  namespace Bar {
    namespace Baz {
      void Hoge() {
        cout << "Foo::Bar::Baz" << endl;
      }
    }
  }
}


using namespace Name1;
namespace FBB = Foo::Bar::Baz;

int main(){
  Func();
  Name2::Func();
  Hoge();

  FBB::Hoge();

  return 0;
}


