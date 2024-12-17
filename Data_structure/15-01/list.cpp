#include "task_manager.h"
#include <iostream>
using namespace std;

class CountDown {
public:
  // Countdown task
  // count down until zero
  static bool Task() {
    cout << m_count << endl;
    if(m_count == 0) {
      return false;
    }
    --m_count;
    return true;
  }

  // register with initial value
  static void Register(TaskManager& manager, int count){
    m_count = count;
    manager.Register(Task);
  }

private:
  static int m_count;
};

// task for showing Hello
bool Hello(){
  cout << "Hello" << endl;
  return true;
}

int main(){
  TaskManager manager;

  CountDown::Register(manager, 3);
  manager.Register(Hello);

  for(int i=0; i < 5; ++i){
    manager.Execute();
  }
}