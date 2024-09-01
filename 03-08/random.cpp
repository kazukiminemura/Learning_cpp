#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRead(){
  srand((unsigned int) time(NULL));
}

int Dice(){
  return rand() % 6 + 1;
}

int Dice2(){
  return (int) (rand() / (RAND_MAX + 1.0) * 6) + 1;

}

int main(){
  InitRead();

  for(int i=0; i<20; ++i){
    cout << Dice() + Dice() << ' ';
  }
  cout << endl;
  
  for(int i=0; i<20; ++i){
    cout << Dice2() + Dice2() << ' ';
  }
  cout << endl;


  return 0;
}
