#ifndef DLIST_H_
#define DLIST_H_

#include <cassert>
#include <cstddef>

// doubly list
template <typename TYPE>
  class DList
{
public:
  // node
  struct Node {
    TYPE value; // save node
    Node* prev; // previouse node
    Node* next; // nexe node
  };

public:
  DList() { m_eol.prev = m_eol.next = &m_eol; }
  virtual ~DList() { Clear(); }

  // get the first node
  Node*       GetFirst()        { return m_eol.next; }
  const Node* GetFirst() const  { return m_eol.next; }

  // get the last node
  Node*       GetLast()        { return m_eol.prev; }
  const Node* GetLast() const  { return m_eol.prev; }

  // get EOL
  const Node* Eol() const { return &m_eol; }

  // insert node before specified node
  // prev -> node -> next
  Node* Insert(Node* next, const TYPE& value) {
    assert(next != NULL);
    Node* node = new Node();
    Node* prev = next->prev;

    node->value = value;
    node->prev = prev;
    node->next = next;
    prev->next = node;
    next->prev = node;
    return node;
  }

  // delte the specified node
  void Erase(Node* node) {
    assert(node != NULL);
    if(node == &m_eol) { return; }

    Node* prev = node->prev;
    Node* next = node->next;

    prev->next = next;
    next->prev = prev;
    delete node;
  }

  // insert at the begining
  Node* Unshift(const TYPE& value) {
    return Insert(m_eol.next, value);
  }

  // delete the first node
  void Shift() {
    Erase(m_eol.next);
  }

  // insert at the end node
  Node* Push(const TYPE& value) {
    return Insert(&m_eol, value);
  }

  // Delete the last node
  void Pop() {
    Erase(m_eol.prev);
  }

  // Delete all node
  void Clear() {
    Node* next;
    for(Node* node = m_eol.next; node != &m_eol; node=next){
      next = node->next;
      delete node;
    }
    m_eol.prev = m_eol.next = &m_eol;
  }

private:
  Node m_eol; // Node indicating end of list
};

#endif // #ifndef DLIST_H_