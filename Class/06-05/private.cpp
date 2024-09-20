#include <iostream>
#include <algorithm>
using namespace std;

const int INTARRAY_SIZE = 100;
const int PADDING_SIZE = 5;

class IntArray {
  public:
    IntArray();

  public:
    int Get(int i);
    void Set(int i, int value);

  private:
    void CheckIndex(int i);

  private:
    int m_array[INTARRAY_SIZE + PADDING_SIZE];
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
  if(0 <= i - PADDING_SIZE && i < INTARRAY_SIZE + PADDING_SIZE){
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
  cout << a.Get(80) << endl;
  cout << a.Get(4) << endl;

  return 0;
}

