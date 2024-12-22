#include "number.h"
#include <cassert>
using namespace std;

void Number::operator=(int n) {
  m_int = n;
  m_type = INT;
}

void Number::operator=(double n) {
  m_double = n;
  m_type = DOUBLE;
}

ostream& operator<<(ostream& ostr, const Number& n){
  if(n.m_type == Number::INT) {
    return ostr << "INT(" << n.m_int << ')';
  } else {
    assert(n.m_type == Number::DOUBLE);
    return ostr << "DOUBLE(" << n.m_double << ')';
  }
}