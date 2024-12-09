#include <iostream>
using namespace std;

#define FIVE_TIMES for(int i_ = 0; i_ < 5; ++i_)
#define TIMES(cnt, n) for(int cnt = 0; cnt < n; ++cnt) // macro function

int main(){
  FIVE_TIMES {
    cout << "Hello" << endl;
  }

  TIMES(i, 5){
    cout << i << ' ';
  }
  cout << endl;

  return 0;
}

