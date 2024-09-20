#include <iostream>
using namespace std;

class Integer{
  public:
    int m_value;

    Integer();
    Integer(int num);
    void Show();
};

// constructor
Integer::Integer(){ m_value = 0; }
Integer::Integer(int num){ m_value = num; }

// show member variables
void Integer::Show(){ cout << m_value << endl; }

int main(){
  Integer a;
  Integer b(100), c(40);

  a.Show();
  b.Show();
  c.Show();

  return 0;
}

