#include <cstdio>
using namespace std;

void Hoge(int* cp){
  // something do
}

int main(){
  signed char a = -1;
  int b;

  b = a;
  printf("%08X (%d)\n", b, b);

  // normal value cast
  b = (unsigned char)a;
  printf("%08X (%d)\n", b, b);
  b = static_cast<unsigned char>(a); // static_cast will inform compile error
  printf("%08X (%d)\n", b, b);


  //reinterpret
  int n = 0x12345678;
  const char* p = reinterpret_cast<const char*>(&n);

  for(size_t i = 0; i < sizeof n; ++i) {
    printf("%02X ", p[i]);
  }
  printf("<-> %08X\n", n);

  // add const 
  int* ptr=nullptr;
  Hoge(const_cast<int*>(ptr));

  return 0;
}