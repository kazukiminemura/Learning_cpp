#include <iostream>
#include <cstring>
using namespace std;

const int MAX_NAME = 20;
struct Student {
  char name[MAX_NAME+1];
  int scoreJapanese;
  int scoreMath;
  int scoreEnglish;
};

int main(){
  Student sumo={"sumo", -1, -1, -1};

  strcpy(sumo.name, "Sumo");
  sumo.scoreJapanese = 10;
  sumo.scoreEnglish = 100;
  sumo.scoreMath = 150;
  
  cout << "name : " << sumo.name << endl
      << "Japanese : " << sumo.scoreJapanese << endl
      << ",Math : " << sumo.scoreMath << endl
      << ",English : " << sumo.scoreEnglish << endl;

  return 0;
}

