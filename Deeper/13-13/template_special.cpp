#include <iostream>
#include <climits>
#include <utility>
using namespace std;

template <typename TYPE>
  class Limits
{
public:
  static const TYPE MIN; // minimum value of TYPE
  static const TYPE MAX; // maximum value of TYPE
};

// #1 class specialization approach. applicable only when unsigned short is used.
template <>
  class Limits<unsigned short>
{
public:
  static const unsigned short MIN = 0;
  static const unsigned short MAX = USHRT_MAX;
};

// #2 entity implementation approach
template <> const int Limits<int>::MIN = INT_MIN;
template <> const int Limits<int>::MAX = INT_MAX;

template <typename TYPE>
  void ShowMinMax()
{
  cout << "TYPE: " << typeid(TYPE).name() << endl
        << " Min: * " << Limits<TYPE>::MIN << endl
        << " Max: * " << Limits<TYPE>::MAX << endl;
}


template <typename TYPE>
  class Value
{
public:
  Value(const TYPE& value) : m_value(value) {}
  void Show() { cout << m_value << endl; }

private:
  TYPE m_value;
};

template <typename FIRST, typename SECOND>
  class Value< pair<FIRST, SECOND> >
{
public:
  Value(const FIRST& first, const SECOND& second) :
  m_value(first, second) {}

  void Show() {
    cout << "1st: " << m_value.first << endl
          << "2nd: " << m_value.second << endl;
  }

private:
  pair<FIRST, SECOND> m_value;
};


int main(){
  // ShowMinMax<unsigned short>();
  // ShowMinMax<int>();

  Value<int> n(42);
  n.Show();

  Value< pair<int, const char*> > p(1, "Hoge");
  p.Show();
}

