#include <cstdio>
using namespace std;

union Word {
  unsigned short word; // 2byte member variable

  struct {
    unsigned char low;  // lower byte
    unsigned char high; // higer byte
  } byte;
};

int main(){
  Word n = { 0x1234 };

  printf("higher byte: %02X\n", n.byte.high);
  printf("lower byte: %02X\n", n.byte.low);
}