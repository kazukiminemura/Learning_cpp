#ifndef TASKMANAGER_H_
#define TASKMANAGER_H_

#include <vector>

// task manager class
class TaskManager {
public:
  // task function inter face
  // if return value is false then remove the task
  typedef bool (*FpTask)();

private:
  //data type and size
  typedef std::vector<FpTask> TaskArray;
  typedef TaskArray::size_type SizeType;

public:
  void Execute();               // Run a task
  void Register(FpTask task);   // Register a task

private:
  void Unregister(SizeType id); // unregister the task

private:
  TaskArray m_task;             // array for tasks
};

#endif // ifndef TASKManager_H_