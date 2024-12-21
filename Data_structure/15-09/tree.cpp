#include "tree.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

typedef Tree<string> NameTree;
typedef NameTree::Node Node;
typedef NameTree::Children Children;
typedef NameTree::CIterator CIterator;

void Show(const Node* node, int depth = 0){
  cout << setw(depth * 2) << "" << node->value << endl;

  const Children& children = node->children;
  for(CIterator it = children.begin(); it != children.end(); ++it){
    Show(*it, depth + 1);
  }
}

int main(){
  NameTree tree("hoge");

  Node* hoge = tree.GetRoot();

  Node* foo = NameTree::Append(hoge, "foo");
  Node* bar = NameTree::Append(hoge, "bar");
  NameTree::Append(hoge, "readme.txt");
  NameTree::Append(foo, "foo.h");
  NameTree::Append(foo, "foo.cpp");
  NameTree::Append(bar, "bar.h");
  NameTree::Append(bar, "bar.cpp");

  Show(hoge);
}