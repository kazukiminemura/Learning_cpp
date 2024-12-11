#include <iostream>
#include <climits>
using namespace std;


void Hoge(int a, int b){
  cout << "hoge" << a << ", " << b << endl;
};

// Hoge runs only when Debug is defined.
#ifdef NDEBUG
#define DEBUG if(true) {} else
#else
#define DEBUG if(false) {} else
#endif

int main(){
  cout << "start" << endl;
  DEBUG(Hoge(1, 2));
}

