#include "InputStream.hpp"
#include <iostream>
using namespace std;

bool InputStream::Set(){
  cin >> m_n;
  return m_n >= 0;
}