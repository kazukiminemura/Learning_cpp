#ifndef ASSOC_H_
#define ASSOC_H_

#include <stdexcept>

template <typename KEY, typename VALUE>
  class Assoc
{
public:
  struct Node {
    KEY key;      // key for search
    VALUE value;  // value associated to node
    Node* left;
    Node* right;

    Node(const KEY& key) :
      key(key), value(), left(NULL), right(NULL) { }
  };

  // Node* const& is hard to read
  // declear PNode (node pointer) for const PNode& 
  typedef Node* PNode;

public:
  Assoc() : m_root(NULL) { }
  virtual ~Assoc() { Clear(); } // delete tree

private:
  // get node reference of specified key
  PNode& FindNode(const KEY& key) {
    return const_cast<PNode&>(FindNode_(key));
  }
  const PNode FindNode(const KEY& key) const {
    return FindNode_(key);
  }

  const PNode& FindNode_(const KEY& key) const {
    return FindNode_(m_root, key);
  }

  const PNode& FindNode_(const PNode& node, const KEY& key) const {
    if(node == NULL) { return node; }

    if(key < node->key) {
      return FindNode_(node->left, key);
    } else if (node->key < key) {
      return FindNode_(node->right, key);
    }  else{
      return node;
    }
  }

public:
  // find node matched with specified key, if not create new node for it.
  // return reference
  VALUE& operator[](const KEY& key){
    PNode& node = FindNode(key);
    if(node == NULL){
      // it matched node is not found, the create new node
      node = new Node(key);
    }
    return node->value;
  }

  // find node matched with specified key, if not throw exception
  const VALUE& operator[] (const KEY& key) const {
    const Node* node = FindNode(key);
    if(node == NULL){
      throw std::out_of_range("could not find the key");
    }
    return node->value;
  }

  // delete all nodes
  void Clear(){
    Clear(m_root);
    m_root=NULL;
  }
  
private:
  void Clear(Node* node){
    // if null, then do nothing
    if(node == NULL) { return; }

    // delete all children nodes
    Clear(node->left);
    Clear(node->right);

    // delete node
    delete node;
  }

private:
  Node* m_root; // root node
};

#endif // #ifndef ASSOC_H_