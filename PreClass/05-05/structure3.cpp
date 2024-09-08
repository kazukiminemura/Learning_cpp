#include <iostream>
#include <cstring>
using namespace std;

const int MAX_NAME = 16;

struct Student {
  char name[MAX_NAME+1];
  int scoreJapanese;
  int scoreMath;
  int scoreEnglish;
};

void Show(const Student* student){
  cout << "name : " << student->name << endl
      << " Japanese : " << student->scoreJapanese
      << ", Math : " << student->scoreMath
      << ", English : " << student->scoreEnglish << endl;

  // cout << (*student).name << endl;
  // cout << *(student.name) << endl;
}

int main(){
  Student student[] = {
    {"Takashi Arai", 73, 98, 86, },
    {"Daisuke Kasai", 64, 45, 40, },
    {"Kaoru Yoshida", 76, 78, 69, },
    };
  int size = sizeof student / sizeof *student;

  cout << student[0].name << endl;
  cout << student << endl;
  cout << &student << endl;
  cout << &student[0] << endl;
  cout << &(student[0].name) << endl;
  cout << &student[0].scoreJapanese << endl;
  cout << &(student[0].scoreJapanese) << endl;
  

  for(int i=0; i < size; ++i){
    Show(&student[i]);
  }

  return 0;
}

