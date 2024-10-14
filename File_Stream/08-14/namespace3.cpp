#include <iostream>
using namespace std;

// Better separate function prototype and implementations
void Show();

namespace MyProgram {
  void Run();
  void Show();
}

int main(){
  MyProgram::Run();

  return 0;
}

void Show(){
  cout << "Hello! Global" << endl;
}

namespace MyProgram {
  void Run(){
    Show();
  }
  
  void Show() {
    cout << "Hello!! MyProgram" << endl;
  }
}

