#include "IntArray.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

// Access member values
int IntArray::Get(int i) const{
  CheckIndex(i);
  return m_array[i];
}

void IntArray::Set(int i, int value){
  CheckIndex(i);
  m_array[i] = value;
}

// check index
void IntArray::CheckIndex(int i) const {
  if(0 <= i && i < m_size){
    // index is valid
  } else {
    cout << "the index is out of bound" << endl
        << "value : " << i << endl;
    exit(EXIT_FAILURE);
  }
}

// constructor
IntArray::IntArray(int size){
  // fill_n is a function filling array with the specified value
  m_array = new int[size];
  m_size = size;

  cout << "called constructor"
      << "the number of elements is " << m_size << endl;
}

// destructor
IntArray::~IntArray(){
  delete [] m_array;

  cout << "called destructor"
      << "the number of elements was " << m_size << endl;
}

int IntArray::Size() const {
    return m_size;
}

// copy _Enable_default_constructor
IntArray::IntArray(const IntArray& other){
  m_array = new int[other.m_size];
  m_size = other.m_size;

  // copy is like a copying data on the memory
  copy(other.m_array, other.m_array + m_size, m_array);

  cout << "called copy constructor" << endl;
}