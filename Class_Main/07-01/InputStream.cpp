#include "InputStream.hpp"
#include <iostream>
using namespace std;

// Access member values
double InputStream::Get() const {
    return m_n;
}

bool InputStream::Set(){
  cin >> m_n;
  return m_n >= 0;
}