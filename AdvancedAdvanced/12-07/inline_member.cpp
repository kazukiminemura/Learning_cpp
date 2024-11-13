#include <iostream>
#include "fraction.h"
using namespace std;


Fraction::Fraction(double numer, double denom) :
  m_numer(numer),
  m_denom(denom)
{
}

// Get numerator
inline double Fraction::GetNumer() const {
  return m_numer;
}

int main(){
  Fraction f(1.0, 1.5);
  cout << f.GetNumer() << endl;
  
  return 0;
}

