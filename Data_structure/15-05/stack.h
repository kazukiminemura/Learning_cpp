#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <stdexcept>

template <typename TYPE>
  class Stack
{
public:
  explicit Stack(size_t sizeMax):
    m_sizeMax(sizeMax), m_size(0)
  {
    m_array = new char[m_sizeMax * sizeof (TYPE)];
  }

  virtual ~Stack(){
    delete[] m_array;
  }

public:
  // stack data on the top
  void Push(const TYPE& value){
    CheckOverflow();
    new(&GetAt(m_size)) TYPE(value);
    ++m_size;
  }

  // delete the top data
  void Pop(){
    CheckUnderflow();
    --m_size;
    GetAt(m_size).~TYPE();
  }

  // get reference on the top data
private:
  const TYPE& Top_() const {
    CheckUnderflow();
    return GetAt(m_size - 1);
  }

public:
  TYPE&       Top()       { return const_cast<TYPE&>(Top_()); }
  const TYPE& Top() const { return Top_(); }

  // Check if the stack is full
  bool Full() const { return m_size == m_sizeMax; }

  // check if the stack is empty
  bool Empty() const { return m_size == 0; }

private:
  // throw if the stack is full
  void CheckOverflow() const {
    if(Full()){
      throw std::overflow_error("stack overflow");
    }
  }

  // throw if the stack is empty
  void CheckUnderflow() const {
    if(Empty()){
      throw std::underflow_error("stack is empty");
    }
  }

private:
  // get i-th element
  const TYPE& GetAt_(size_t i) const {
    return reinterpret_cast<const TYPE&>(m_array[i * sizeof (TYPE)]);
  }

  TYPE&       GetAt(size_t i)       { return const_cast<TYPE&>(GetAt_(i)); }
  const TYPE& GetAt(size_t i) const { return GetAt_(i); }

private:
  char*  m_array;
  size_t m_sizeMax;
  size_t m_size;
};

#endif // #ifndef STACK_H_