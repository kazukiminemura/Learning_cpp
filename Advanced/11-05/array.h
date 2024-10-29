#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stdexcept>

template <typename TYPE>
  class Array
{
public:
    void Error();
    Array(int size);
    Array(const Array& other);
    void operator=(const Array& other);
    virtual ~Array();

public:
    // access function
    TYPE Get(int i) const;
    void Set(int i, TYPE value);

public:
    //return size of array
    int Size() const;

private:
    // check index
    void CheckIndex(int i) const;

private:
    TYPE* m_array;
    const int m_size;
};

template <typename TYPE>
  Array<TYPE>::Array(int size):
  m_size(size)
{
    m_array = new TYPE[size];
}

template <typename TYPE>
  Array<TYPE>::Array(const Array& other):
  m_size(other.m_size)
{
    m_array = new TYPE[m_size];
    std::copy(other.m_array, other.m_array + m_size, m_array);
}

template <typename TYPE>
  void Array<TYPE>::operator=(const Array& other)
{
    TYPE* array = new TYPE[other.m_size];
    delete[] m_array;
    m_array = array;
    m_size = other.m_size;
    std::copy(other.m_array, other.m_array + m_size, m_array);
}

template <typename TYPE>
  Array<TYPE>::~Array()
{
    delete[] m_array;
}

// access function (get)
template <typename TYPE>
  TYPE Array<TYPE>::Get(int i) const
{
    CheckIndex(i);
    return m_array[i];
}

// access function (configuration)
template <typename TYPE>
  void Array<TYPE>::Set(int i, TYPE value)
{
    CheckIndex(i);
    m_array[i] = value;
}

// return array size
template <typename TYPE>
  int Array<TYPE>::Size() const
{
    return m_size;
}

// index check
template <typename TYPE>
  void Array<TYPE>::CheckIndex(int i) const
{
    if(0 <= i && i < m_size) {
        // valid index
    } else {
        std::cerr << "invalid index" << std::endl
                << "value: " << i << std::endl;
        std::exit(EXIT_FAILURE);
    }
}

template <typename TYPE>
  void Array<TYPE>::Error()
{
  m_size = 0; // assigning value to const data member is invalid --> error will raise
}

#endif // #ifndef ARRAY_H_