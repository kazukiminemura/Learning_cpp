#include <iostream>
#include <sstream>
#include <string>
using namespace std;

typedef int ValueType;

class Calculator {
public:
  void Run();

private:
  bool Input();             // input 
  bool Calculate();         // do compute
  void ShowResult() const;  // show results

private:
  ValueType m_a, m_b;             // two values
  char m_op;                // operation
  ValueType m_result;             // operation result
};

void Calculator::Run() {
  while(Input()){
    if(Calculate()) {
      ShowResult();
    }
  }
}

// input
bool Calculator::Input() {
  istringstream isstr;

  while(true) {
    string line;

    cout << "input operation > " << flush;
    getline(cin, line);
    if(cin.fail() || line.empty()) {
      return false;
    }

    isstr.clear();
    isstr.str(line);
    isstr >> m_a >> m_op >> m_b;
    if(isstr.fail()) {
      continue;
    }

    isstr >> line;
    if(isstr.fail()) {
      break;
    }
  }

  return true;
}

// compute
bool Calculator::Calculate() {
  switch(m_op) {
    case '+': m_result = m_a + m_b; break;
    case '-': m_result = m_a - m_b; break;
    case '*': m_result = m_a * m_b; break;
    case '/': 
      if(m_b == 0) {
        cerr << "can not divide with zero" << endl;
        return false;
      }
      m_result = m_a / m_b;
      break;
    
    default:
      cerr << "invalid operation" << endl;
      return false;
  }

  return true;
}

// show compute result
void Calculator::ShowResult() const {
    cout << m_result << endl;
}

int main(){
  Calculator calc;  
  calc.Run();

  return 0;
}

