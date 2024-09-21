#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class IntArray {
  public:
    IntArray(int size);
    ~IntArray();

  public:
    int Get(int i);
    void Set(int i, int value);

  private:
    void CheckIndex(int i);

  private:
    int* m_array;
    int m_size;
};

// Access member values
int IntArray::Get(int i){
  CheckIndex(i);
  return m_array[i];
}

void IntArray::Set(int i, int value){
  CheckIndex(i);
  m_array[i] = value;
}

// check index
void IntArray::CheckIndex(int i){
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

void Viss (int num){
  cout << "Viss : No." << num << endl;
}

IntArray a(10);

int main(){
  Viss(1);

  IntArray b(20);
  Viss(2);

  IntArray c(30);
  Viss(3);
  {
    IntArray d(40);
    Viss(4);
  }
  Viss(5);

  return 0;
}

