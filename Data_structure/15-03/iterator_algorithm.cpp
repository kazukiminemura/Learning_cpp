#include "dlist.h"
#include <iostream>
using namespace std;

#define ARRAY_SIZE(array) (sizeof (array) / sizeof * (array))

typedef DList<int> List;
typedef List::Node Node;

class Iterator {
public:
  Iterator(const Node* node) : m_node(node) { }

public:
  // get current node value
  int operator*() { return m_node->value; }

  // judge if the node points different node
  bool operator!=(const Iterator& other) const {
    return m_node != other.m_node;
  }

  // forward
  void operator++() { m_node = m_node->next; }

protected:
  const Node* m_node; // current node
};

// using template for iterator class and pointer
template <typename ITERATOR>
  void Show(ITERATOR begin, ITERATOR end)
{
  for(ITERATOR it = begin; it != end; ++it){
    cout << *it << ' ';
  }
  cout << endl;
}

int main(){
  List list;

  for(int i = 0; i < 5; ++i) { list.Push(i); }
  Show(Iterator(list.GetFirst()), Iterator(list.Eol()));

  static const int ARRAY[] = {1, 2, 4, 8};
  static const int SIZE = ARRAY_SIZE(ARRAY);
  Show(ARRAY, ARRAY + SIZE);
}