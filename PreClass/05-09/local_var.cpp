#include <iostream>
#include <algorithm>
using namespace std;

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress(){
  cout << "check if the address is constant" << endl;
  
  CheckAddress_Sub();
  CheckAddress_Sub2();
  CheckAddress_Sub();
}

// output the addresses of static a and dynamic b
void CheckAddress_Sub(){
  static int a;
  int b;

  cout << "&a = " << (size_t)&a << endl
      << "&b = " << (size_t) &b << endl;
      
}

// Check the addressed when calling CheckAddress_Sub
void CheckAddress_Sub2(){
  cout << "in Sub2" << endl;
  CheckAddress_Sub();
}

void CheckInitOnce_Sub();

void CheckInitOnce(){
  cout << endl << "check if the initialization is done only one time" << endl;

  CheckInitOnce_Sub();
  CheckInitOnce_Sub();
}

// check if the effect of ++a ++b
void CheckInitOnce_Sub(){
  static int a = 3;
  int b = 3;

  cout << "a = " << a << endl
      << "b = " << b << endl;

  ++a;
  ++b;
}

// check if the values are initizalized by zero
void CheckZereInit_Sub();
void CheckZereInit_Sub2();

void CheckZeroInit(){
  cout << endl << "check if it was initialized by zero" << endl;

  CheckZereInit_Sub();
  CheckZereInit_Sub2();
}

void CheckZereInit_Sub(){
  static int a, b, c, d;
  cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void CheckZereInit_Sub2(){
  int a, b, c, d;
  cout << a << ',' << b << ',' << c << ',' << d << endl;
}


// check if the values are guaranteed
void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant(){
  cout << endl << "check if the value is invariant" << endl;

  int *pa, *pb;
  CheckInvariant_Sub(pa, pb);
  CheckInvariant_Sub2();

  cout << "*pa = " << *pa << endl
        << "*pb = " << *pb << endl;
}

void CheckInvariant_Sub(int*& pa, int*& pb){
  static int a = 9;
  int b = 9;
  pa = &a;
  pb = &b;
}

void CheckInvariant_Sub2(){
  int dummy[100];
  fill_n(dummy, 100, 0);
}

int main(){
  CheckAddress();
  CheckInitOnce();
  CheckZeroInit();
  CheckInvariant();

  return 0;
}

