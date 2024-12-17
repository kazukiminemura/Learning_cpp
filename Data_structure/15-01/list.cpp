#include "task_manager.h"
#include <iostream>
using namespace std;

class CountDown {
public:
  // Countdown task
  // count down until zero
  static bool Task() {
    cout << "Task: " <<  m_count << endl;
    if(m_count == 0) {
      return false;
    }
    --m_count;
    cout << "Task becomes: " <<  m_count << endl;
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

int CountDown::m_count;

// task for showing Hello
bool Hello(){
  cout << "Hello" << endl;
  return true;
}

int main(){
  TaskManager manager;

  CountDown::Register(manager, 3); // m_task.size() == 1
  manager.Register(Hello);         // m_task.size() == 2

  for(int i=0; i < 5; ++i){
    manager.Execute();
  }
}