#include <iostream>
#include <vector>
using namespace std;

void Show(const int* array, int size){
  for(size_t i = 0; i < size; ++i){
    cout << array[i] << ' ';
  }
  cout << endl;
}

int main(){
  vector<int> v(10);

  for(size_t i = 0, size = v.size(); i < size; ++i){
    v[i] = i * i;
  }

  v.resize(5);
  // Show(&v[0], v.size());
  Show(v.data(), v.size());

  return 0;
}

