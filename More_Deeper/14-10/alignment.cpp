#include <iostream>
using namespace std;

struct Person{
  char name[21];
  int age;
  char birthmonth;
  char sex;
};

int main(){
  cout << sizeof(Person) << endl;
}