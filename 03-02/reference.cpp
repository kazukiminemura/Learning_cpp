#include <iostream>
using namespace std;

void WesternToShouwa(int& x){
  if(1926 <= x && x <= 1989){
    x -= 1925;
  }else{
    x = 0;
  }
}

void Shouwa(){
  int year;

  cout << "enter western year > " << flush;
  cin >> year;

  WesternToShouwa(year);
  if(year != 0){
    cout << "that year is shouwa " << year
      << "-th year" << endl;
  }else{
    cout << "that is not shouwa " << endl;
  }
}


int main(){
  Shouwa();
  Shouwa();
}
