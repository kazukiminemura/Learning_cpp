#include "HalfInputStream.hpp"
#include <iostream>
using namespace std;

void HalfInputStream::SetBase(){
  InputStream::SetBase();
  m_n /= 2;
}