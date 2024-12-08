#include <iostream>
#include <cassert>
using namespace std;

// get size of array
#define ARRAY_SIZE(array) (sizeof (array) / sizeof *(array))

class Calculator {
public:
  void Run();

private:
  bool Input();
  void Calculate();

private:
  // operations
  int Add() {return m_a + m_b; }
  int Sub() {return m_a - m_b; }
  int Mul() {return m_a * m_b; }
  int Div() {return m_a / m_b; }

  typedef int (Calculator::*MfpOp2)();
  static const MfpOp2 MFP_OPERATOR[];

private:
  int m_a, m_b;
};

// array functin pointer
const Calculator::MfpOp2 Calculator::MFP_OPERATOR[] = {
  &Calculator::Add, &Calculator::Sub,
  &Calculator::Mul, &Calculator::Div,
};

// name of operation
const char* const OPERATION_NAME[] = {
  "Add", "Sub", "Mul", "Div"
};

void Calculator::Run() {
  while(Input()) {
    Calculate();
  }
}

// input two values
bool Calculator::Input() {
  cout << "input two values > " << flush;
  m_b = 0;
  cin >> m_a >> m_b;
  return m_b != 0;
}

// calculate operation
void Calculator::Calculate() {
  static const size_t SIZE = ARRAY_SIZE(MFP_OPERATOR);
  assert(SIZE == ARRAY_SIZE(OPERATION_NAME));

  for(size_t i = 0; i < SIZE; ++i){
    int result = (this->*MFP_OPERATOR[i])();
    cout << OPERATION_NAME[i] << ": " << result << endl;
  }
}

int main(){
  Calculator calc;
  calc.Run();
}

