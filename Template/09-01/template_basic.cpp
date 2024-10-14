#include <iostream>
using namespace std;

// if you use overload feature to implement two Abs functions
// int Abs(int a){
//   return a < 0? -a : a; 
// }

// double Abs(double a){
//   return a < 0? -a : a; 
// }

// if you use Template feature
template <typename TYPE>
  TYPE Abs(TYPE a)
{
    return a < 0 ? -a : a;
}

int main(){
  cout << Abs<int>(-10) << endl;
  cout << Abs<double>(-0.89) << endl;
}

