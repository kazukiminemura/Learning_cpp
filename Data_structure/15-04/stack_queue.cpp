#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;

int main(){
//   Stack<int> stack(10);

//   try {
//     for(int i = 0; i < 20; ++i){
//       stack.Push(i);
//     }
//   } catch(const overflow_error& e){
//     cerr << e.what() << endl;
//   }

//   cout << "=======" << endl;
//   while(! stack.Empty()){
//     cout << stack.Top() << " ";
//     stack.Pop();
//   }
//   cout << endl;

  Queue<int> queue(10);

  try{
    for(int i=0; i<5; ++i)  { queue.Push(i); }
    for(int i=0; i<3; ++i)  { queue.Pop( ); }
    for(int i=0; i<20; ++i) { queue.Push(i); }
  } catch(const overflow_error& e) {
    cerr << e.what() << endl;
  }

  while(!  queue.Empty()){
    cout << queue.Front() << " ";
    queue.Pop();
  }
  cout << endl;
}