#include <iostream>
using namespace std;

int array[3][5] = {
  {  0,  1,  2,  3,  4, },
  { 10, 11, 12, 13, 14, },
  { 20, 21, 22, 23, 24, },
};

typedef int Int5[5];

int main(){
  int (*p)[5] = array;
  cout << p[2][3] << endl;
}