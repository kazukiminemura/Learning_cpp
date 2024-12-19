#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdexcept>

template <typename TYPE>
  class Queue
{
public:
  explicit Queue(size_t sizeMax) : 
    m_sizeMax(sizeMax), m_size(0), m_begin(0)
  {
    m_array = new TYPE[m_sizeMax];
  }

  virtual ~Queue(){
    delete[] m_array;
  }

public:
  // add data at the end
  void Push(const TYPE& value){
    CheckOverflow();
    m_array[AddIndex(m_begin, m_size)] = value;
    ++m_size;
  }

  // delete the head data
  void Pop() {
    CheckUnderflow();
    m_begin = AddIndex(m_begin, 1);
    --m_size;
  }

private: // get the head data reference
  const TYPE& Front_() const {
    CheckUnderflow();
    return m_array[m_begin];
  }

public:
  TYPE&       Front()       { return const_cast<TYPE&>(Front_()); }
  const TYPE& Front() const { return Front_(); }

  // check if the queue is full
  bool Full() const { return m_size == m_sizeMax; }

  // check if the queue is empty
  bool Empty() const { return m_size == 0; }

private:
  // add Index
  size_t AddIndex(size_t i, size_t add){
    return (i + add) % m_sizeMax;
  }

private:
  // throw error if the queue is full
  void CheckOverflow() const {
    if(Full()){
      throw std::overflow_error("queue is overflow");
    }
  }

  // throw error if the queue is empty
  void CheckUnderflow() const {
    if(Empty()){
      throw std::underflow_error("queue is empty");
    }
  }

private:
  TYPE* m_array;
  size_t m_sizeMax;
  size_t m_size;
  size_t m_begin;
};

#endif //#ifndef QUEUE_H_