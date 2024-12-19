#include "stack.h"
#include <iostream>
using namespace std;

class Hoge { // not defined default constructor
public:
  explicit Hoge(int n) : m_n(n) { }
  int Get() const { return m_n; }

private:
  int m_n;
};


int main(){
  Stack<Hoge> stack(10);

  try {
    for(int i = 0; i < 20; ++i){
      stack.Push(Hoge(i));
    }
  } catch(const overflow_error& e){
    cerr << e.what() << endl;
  }

  while(! stack.Empty()){
    cout << stack.Top().Get() << " ";
    stack.Pop();
  }
  cout << endl;
}