// fraction class
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
public:
  Fraction(double numer = 0, double denom = 1);

public:
  double GetNumer() const; // get numerator
  double GetDenom() const; // get denominator
  double Get() const;

  operator double() const;
  Fraction Fraction::operator- () const;
  Fraction& Fraction::operator*=(const Fraction& rop);
  Fraction& Fraction::operator++();
  Fraction Fraction::operator++(int);

  friend Fraction operator* (double lop, const Fraction& rop);

private:
  double m_numer; // numerator
  double m_denom; // denominator
};

#endif // #ifndef FRACTION_H_