#include "Stream.hpp"
#include <iostream>
using namespace std;

Stream::Stream(double n):
  m_n(n)
{
    cout << "Stream" << endl;
}

double Stream::Get() const {
    return m_n;
}

bool Stream::Set(){
    SetBase();
    return m_n >= 0;
}