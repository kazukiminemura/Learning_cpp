#include <iostream>
using namespace std;

class ABase {
public:
  ABase(int x): m_x(x) {}
  virtual ~ABase() {}
  // virtual modifier is required for override feature.
  // = 0 is for pure virtual function that does not require implementation

public:
  void Show() { cout << m_x << endl; }


protected:
  int m_x;
};

class A1: virtual public ABase
{
public:
  A1(): ABase(1) {}
};
class A2: virtual public ABase
{
public:
  A2(): ABase(2) {}
};

class C:
  public A1,
  public A2
{
public:
  C(): ABase(3) {}
};

int main(){
  A1 a1; a1.Show();
  A2 a2; a2.Show();
  C c; c.Show(); // A1 and A2 in C are not calling ABase, due to virtual inherit.
  // A1::Show() will how 3 since C constructor initiated m_x to 3
  c.A1::Show();
}

