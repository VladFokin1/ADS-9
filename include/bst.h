// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_

template < typename T >
class BST {
 public :
  struct Node {
    T value;
    int count;
    Node * left;
    Node * right;
  };
 private :
    Node * root;
    Node * addNode(Node * root , T value) {
      if (root == nullptr) {
        root = new Node;
        root −> value = value;
        root −> count = 1;
        root −> left = root −> right = nullptr;
      } else if (root −> value > value) {
        root −> left = addNode(root −> left, value);
      } else if (root −> value < value) {
        root −> right = addNode(root −> right, value);
      } else {
        root −> count++;
      }
      return root;
    }
 public :
    void add(T value) {
      root = addNode(root, value);
    }
};

#endif  // INCLUDE_BST_H_
