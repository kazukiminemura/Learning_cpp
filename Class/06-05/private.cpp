#include <iostream>
#include <algorithm>
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray {
  public:
    int m_array[INTARRAY_SIZE];

    IntArray();
    int Get(int i);
    void Set(int i, int value);
    void CheckIndex(int i);
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
  if(0 <= i && i < INTARRAY_SIZE){
    // index is valid
  } else {
    cout << "the index is out of bound" << endl
        << "value : " << i << endl;
    exit(EXIT_FAILURE);
  }
}

// constructor
IntArray::IntArray(){
  // fill_n is a function filling array with the specified value
  fill_n(m_array, INTARRAY_SIZE, 0);
}

int main(){
  IntArray a;
  cout << a.Get(10) << endl;
  cout << a.Get(101) << endl;

  return 0;
}

