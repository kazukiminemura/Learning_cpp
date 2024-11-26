#include <iostream>
using namespace std;

class ABase {
public:
  ABase(): m_x(0) {}
  virtual ~ABase() {}
  // virtual modifier is required for override feature.
  // = 0 is for pure virtual function that does not require implementation
  virtual void Set(int x) { m_x = x; }


protected:
  int m_x;
};

class A1: virtual public ABase {};
class A2: virtual public ABase {};

class C:
  public A1,
  public A2
{
  public:
    virtual void Show() {
      cout << A1::m_x << ", " 
            << A2::m_x << endl;
    }
};

int main(){
  C c;
  A1& a1 = c;
  A2& a2 = c;

  a1.Set(1);
  c.Show();

  a2.Set(2);
  c.Show();
}

