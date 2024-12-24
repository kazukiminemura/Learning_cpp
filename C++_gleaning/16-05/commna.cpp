#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  static const int WIDTH = 9;
  static const int HEIGHT = 9;
  int kuku[WIDTH * HEIGHT];

  for(int h = 0, i = 0; h < HEIGHT; ++h){
    for(int w = 0; w < WIDTH; ++w, ++i){
      kuku[i] = (h + 1) * (w + 1);
    }
  }
  for(int h = 0, i = 0; h < HEIGHT; ++h){
    for(int w = 0; w < WIDTH; ++w, ++i){
      cout << setw(2) << kuku[i] << ' ';
    }
    cout << endl;
  }
}