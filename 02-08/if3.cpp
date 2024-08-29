#include <iostream>
using namespace std;


// return Japan's era name
int WesternToShouwa(int western){
  if(1926 <= western && western <= 1989){
    return western - 1925;
  }else{
    return 0;
  }
}

void Shouwa(){
  int western;

  cout << "enter western year > " << flush;
  cin >> western;

  int shouwa = WesternToShouwa(western);
  if(shouwa == 0){
    cout << "that year is not shouwa" << endl;
  }else{
    cout << "that year is " << shouwa << "th year of Shouwa era" << endl;
  }
}

int main(){
  Shouwa();
  Shouwa();
  
  return 0;
}
