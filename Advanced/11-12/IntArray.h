#include <iostream>
using namespace std;

class IntArray {
  public:
    // IntArray(int size);
    explicit IntArray(int size); // do not cast from int to IntArray. they are different type. so added explicti.

    ~IntArray();
    IntArray(const IntArray& other); // copy constructor

  public:
    int Get(int i);
    void Set(int i, int value);
    int Size() const;
    int& At(int i);
    int& operator[] (int i);
    const int& operator[] (int i) const;

  private:
    void CheckIndex(int i) const;

  private:
    int* m_array;
    int m_size;
};

// Access member values
int IntArray::Get(int i) {
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

int& IntArray::At(int i) {
  CheckIndex(i);
  return m_array[i];
}

// this enables "cin >> v[i] or cout << v[i]"
int& IntArray::operator[] (int i) {
  CheckIndex(i);
  return m_array[i];
}

const int& IntArray::operator[] (int i) const {
  CheckIndex(i);
  return m_array[i];
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
