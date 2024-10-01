#include "InputStream.hpp"
#include "ArrayStream.hpp"
#include <iostream>
using namespace std;

// create derivative class
Stream* CreateStream(){
  char ch;

  while(true){
    cout << "i: InputStream, a: ArrayStream > " << flush;
    cin >> ch;

    switch(ch){
      case 'i':
        // if 'i' then return InputStream object
        return new InputStream();
      case 'a':
        // if 'a' then return ArrayStream object
        while(true){
          cout << "select array (1, 2) > " << flush;
          cin >> ch;
          if(ch == '1'){
            static const double ARRAY[] = { 1, 2, 3, -1};
            static const int SIZE = sizeof ARRAY / sizeof *ARRAY;
            return new ArrayStream(ARRAY, SIZE);
          } else if (ch == '2'){
            static const double ARRAY[] = { 0.5, 1.5, -1};
            static const int SIZE = sizeof ARRAY / sizeof *ARRAY;
            return new ArrayStream(ARRAY, SIZE);
          }
        }// while(true)
    }  // switch(ch)
  } // while(true)
}

// return sum of stream
double Sum(Stream& stream){
  double sum = 0;
  while(stream.Set()){
    sum += stream.Get();
  }
  return sum;
}


int main(){
  // static const double ARRAY[] = {1, 2, 3, -1};
  // static const int SIZE = sizeof ARRAY / sizeof *ARRAY;
  // ArrayStream stream(ARRAY, SIZE);
  // while(stream.Set()){
  //   cout << stream.Get() << ' ';
  // }
  // cout << endl;

  for(int i=0; i<3; ++i){
    Stream* stream = CreateStream();
    double sum = Sum(*stream);
    cout << "Sum: " << sum << endl;
    delete stream;
  }

  return 0;
}

