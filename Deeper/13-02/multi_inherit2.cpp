#include <iostream>
using namespace std;

class ABase {
public:
  virtual ~ABase() {}
  // virtual modifier is required for override feature.
  // = 0 is for pure virtual function that does not require implementation
  virtual void AHoge() = 0; 
};

class A1:
  public ABase
{
  public:
    virtual void AHoge(){
      cout << "A1::Ahoge" << endl;
    }
};

class A2:
  public ABase
{
  public:
    virtual void AHoge(){
      cout << "A2::Ahoge" << endl;
    }
};

class C:
  public A1,
  public A2
{
  public:
    virtual void AHoge() {
      cout << "C::AHoge" << endl;
    }
};

int main(){
  C c;
  A1& a1 = static_cast<A1&>(c);
  A2& a2 = static_cast<A2&>(c);

  a1.AHoge();
  a2.AHoge();

  c.A1::AHoge();
  c.A2::AHoge();
}

