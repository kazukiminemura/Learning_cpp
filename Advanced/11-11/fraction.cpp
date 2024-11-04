#include "fraction.h"

Fraction::Fraction(double numer, double denom) :
  m_numer(numer),
  m_denom(denom)
{
}

// Get numerator
double Fraction::GetNumer() const {
  return m_numer;
}

// Get denominator
double Fraction::GetDenom() const {
  return m_denom;
}

double Fraction::Get() const {
  return m_numer / m_denom;
}

// cast overload
Fraction::operator double() const {
    return m_numer / m_denom;
}

// negative sign overload (-) (not subtraction!!!)
Fraction Fraction::operator- () const {
  return Fraction(-m_numer, m_denom);
}

// multicative assignee overload (*=)
Fraction& Fraction::operator*=(const Fraction& rop){
  m_numer *= rop.m_numer;
  m_denom *= rop.m_denom;
  return *this;
}

// pre increment overload (++i)
Fraction& Fraction::operator++() {
  m_numer += m_denom;
  return *this;
}

// post increment overload (int is dummy)
Fraction Fraction::operator++(int) {
  Fraction ret = *this;
  m_numer += m_denom;
  return ret;
}

// operator* overload outside of Fraction class
Fraction operator* (double lop, const Fraction& rop) {
  // return Fraction(lop * rop.GetNumer(), rop.GetDenom());
  return Fraction(lop * rop.m_numer, rop.m_denom); // with friend function fearture
}