#include <iostream>
using namespace std;

const char* const MONTH_NAME[] = {
  "Mutuki", "kisaragi", "yayoi", "uzuki", "satuki", "minazuki",
  "fumizuki", "hazuki", "agatuki", "kannkazuki", "simotuki", "siwasu"
};

const char* GetOldMonthName(int month){
  if(1 <= month && month <= 12){
    return MONTH_NAME[month - 1];
  }
  return 0;
}


int main(){
  int month;

  cout << "what month is today > " << flush;
  cin >> month;

  const char* name = GetOldMonthName(month);
  if(name == 0){
    cout << "that month does not exist" << endl;
  } else {
    cout << name << endl;
  }
  
  return 0;
}
