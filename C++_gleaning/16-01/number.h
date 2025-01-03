#ifndef NUMBER_H_
#define NUMBER_H_

#include <iostream>

class Number {
private:
  // holding data type
  enum Type { INT, DOUBLE };

public:
  Number(int n = 0) { operator=(n); }
  Number(double n)  { operator=(n); }
  void operator=(int n);
  void operator=(double n);

public:
  friend std::ostream& operator<< (
    std::ostream& ostr, const Number& n);
  
private:
  // different data type, but use same memory address
  union Value {
    int int_;
    double double_;
  };

  Value m_value;
  Type m_type; // holding data type
};

#endif // #ifndef NUMBER_H_