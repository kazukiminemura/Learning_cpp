#include <iostream>
using namespace std;

void BirthMonth(){
  int month;

  cout << "what is your birth month > " << flush;
  cin >> month;

  if( 1 <= month && month <= 12){
    cout << "ok " << month << " is your born month" << endl;
  } else {
    cout << month << " what a hell" << endl
         << "such month doesn't exist" << endl;
  }
}


int main(){
  BirthMonth();
  BirthMonth();
  
  return 0;
}
