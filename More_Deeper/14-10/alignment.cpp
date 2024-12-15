#include <iostream>
using namespace std;

#pragma pack(1) // change alignment size: can be set as 1, 2, 4, 8, 16
struct Person{
  char name[21];
  int age;
  char birthmonth;
  char sex;
};
#pragma pack()

int main(){
  cout << "      name : " << offsetof(Person, name)       << endl
      << "        age : " << offsetof(Person, age)        << endl
      << " birthmonth : " << offsetof(Person, birthmonth) << endl
      << "        sex : " << offsetof(Person, sex)        << endl
      << "       size : " << sizeof(Person)               << endl;
}