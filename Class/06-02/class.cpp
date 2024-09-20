#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
  public:
    char name[MAX_NAME+1];
    int scoreJapanese;
    int scoreMath;
    int scoreEnglish;

    void Show();
};

void Student::Show(){
  cout << "name : " << name << endl
      << " Japanese : " << scoreJapanese << " point"
      << " Math : " << scoreMath << " point"
      << " English : " << scoreEnglish << " point" << endl;
}


int main(){
  Student student[] = {
    { "Akai Takashi", 73, 98, 86},
    { "Sasai Daisuke", 64, 45, 40},
    { "Yoshida Kaoru", 76, 78, 9},
  };

  int size = sizeof student / sizeof * student;

  for(int i=0; i<size; ++i){
    // calling member function.
    // students[0].Show() calles student[0] object
    // students[1].Show() calles student[0] object
    // when calling pointer, use "->"" (arrow op)
    student[i].Show(); 
  }
}

