#include <iostream>
using namespace std;

class Count {
public:
  Count();
  virtual ~Count();
  void Show();

private:
  static int m_count;
};

int Count::m_count;

Count::Count() {
  ++m_count;
}

Count::~Count() {
  --m_count;
}

void Count::Show() {
  cout << m_count << endl;
}

class Count2 : public Count { }; // inheritance

int main(){
  Count a;
  a.Show();
  {
    // Count b;
    Count2 b;
    a.Show();
    b.Show();
  }
  a.Show();
  
  
  return 0;
}

