#include "task_manager.h"

// Run task
void TaskManager::Execute() {
  for(SizeType i = 0; i < m_task.size(); ){
    if(m_task[i]()){
        ++i;
    }else{
        Unregister(i);
    }
  }
}

void TaskManager::Register(FpTask task) {
    m_task.push_back(task);
}

// Unregister task
void TaskManager::Unregister(SizeType id) {
  SizeType size = m_task.size();

  for(SizeType i = id + 1; i < size; ++i){
    m_task[i-1]= m_task[i];
  }

  // reduce size 1
  m_task.resize(size - 1);
}