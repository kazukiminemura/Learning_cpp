#include <iostream>
using namespace std;

void One(int& ret){
  int n = 1;
  ret = n;
}

class Hoge {
public:
  Hoge(int n) : m_n(n)        { cout << "Hoge  : " << m_n << endl; }
  Hoge(const Hoge&)           { cout << "Hoge& : " << m_n << endl; }
  void operator=(const Hoge&) { cout << "Hoge= : " << m_n << endl; }
  virtual ~Hoge()             { cout << "~Hoge : " << m_n << endl; }

private:
  int m_n;
};

Hoge Two(){
  Hoge n(2);
  return n;
}

int Abs(const int& a){
  return a < 0 ? -a : a;
}

int main(){
  // int ret;
  // One(ret);
  // cout << ret + 2 << endl;

  Hoge hoge(1);
  hoge = Two();
  
  int n = -10;
  cout << Abs(n) << endl;
  cout << Abs(-10) << endl;

  return 0;
}

