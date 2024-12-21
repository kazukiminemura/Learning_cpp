#ifndef TREE_H_
#define TREE_H_

#include <list>

template <typename TYPE>
  class Tree
{
public:
  struct Node {
    typedef std::list<Node*> Children;
    typedef typename Children::iterator Iterator;
    typedef typename Children::const_iterator CIterator;

    TYPE value;         // child value
    Children children;  // child node

    Node(const TYPE& value) : value(value) { }
  };
  
  typedef typename Node::Children Children;
  typedef typename Node::Iterator Iterator;
  typedef typename Node::CIterator CIterator;

public:
  explicit Tree(const TYPE& value){
    m_root = new Node(value); // creater root node
  }

  virtual ~Tree(){
    Clear();
    delete m_root; // Clear does not delete root node, so manually delete it here
  }

  // get root node
  Node*         GetRoot()       {return m_root; }
  const Node*   GetRoot() const {return m_root; }

  // create a node with a value at node child
  static Node* Append(Node* node, const TYPE& value){
    Node* child = new Node(value);
    node->children.push_back(child);
    return child;
  }

  // delete all nodes except for root node
  void Clear(){
    Clear(m_root);
  }

private:
  void Clear(Node* node){
    // delete all children nodes
    Children& children = node->children;
    for(Iterator it = children.begin(); it != children.end(); ++it){
      Clear(*it);
    }
    children.clear();

    // does not delete root node
    if(node != m_root) { delete node; }
  }

private:
  Node* m_root; // root_node
};

#endif // #ifndef TREE_H_