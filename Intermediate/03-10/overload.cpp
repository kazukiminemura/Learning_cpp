#include <iostream>
using namespace std;

int Abs(int a){
  if(a<0){
    return -a;
  }else{
    return a;
  }
}

double Abs(double a){
  if(a<0){
    return -a;
  }else{
    return a;
  }
}

int Input(int& i, double& d){
  cout << "input an integer value > " << flush;
  cin >> i;

  if(i==0){
    return 0;
  }

  cout << "input a decimal value > " << flush;
  cin >> d;
  if(i==0){
    return 0;
  }
  
  return 1;
}

void ShowAbs(int i, double d){
  cout << i << "'s absolute value is " << Abs(i) << endl;
  cout << d << "'s absolute value is " << Abs(d) << endl;
}


int main(){
  int i;
  double d;

  while(Input(i, d) != 0){
    ShowAbs(i,d);
  }
  
  return 0;
}
