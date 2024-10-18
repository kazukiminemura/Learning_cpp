#include <iostream>
using namespace std;

template <typename TYPE = char>
  class FortyTwo
{
public:
  TYPE Get() const;
};

template <typename TYPE>
  TYPE FortyTwo<TYPE>::Get() const
{
  return 42;
}


int main(){
  FortyTwo<> ch;
  FortyTwo<int> i;

  cout << ch.Get() << endl;
  cout << i.Get() << endl;

  return 0;
}

