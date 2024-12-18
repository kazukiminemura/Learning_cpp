#include "dlist.h"
#include <iostream>
using namespace std;

typedef DList<int> List;
typedef List::Node Node;

typedef Node* Node::*ShowDirection;
const ShowDirection SD_FORWARD = &Node::next; // forward
const ShowDirection SD_BACKWARD = &Node::prev; // backward

// show contents of list
void Show(const List& list, ShowDirection dir = SD_FORWARD) {
  const Node* eol = list.Eol();
  const Node* head = eol->*dir;
  for(const Node* node = head; node != eol; node = node->*dir){
    cout << node->value << ' ';
  }
  cout << endl;
}

int main(){
  List list;

  for(int i = 0; i < 5; ++i) { list.Push(i); }
  Show(list);
  Show(list, SD_BACKWARD);

  for(int i = 5; i < 10; ++i) { list.Unshift(i); }
  Show(list);

  list.Pop();
  list.Pop();
  list.Shift();
  Show(list);
}