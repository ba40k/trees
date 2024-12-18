//
// Created by radamir on 18.12.24.
//

#ifndef STUPIDBINARYTREE_H
#define STUPIDBINARYTREE_H
#include "basicTree.h"
template<typename T>
class BinaryTree : public basicTree<T> {
private:
      class node {
            node* parent;
            node* left;
            node* right;
            T data;
            bool empty;
      };
      node* root;

public:
      BinaryTree();
      bool find(T data) const override;
      void add(T data) override;
      void remove(T data) override;
      ~BinaryTree();
};
template<typename T>
BinaryTree<T>::BinaryTree() {
      root->left = nullptr;
      root->right = nullptr;
      root->empty = true;
      root->parent = root;
}

template<typename T>
void BinaryTree<T>::find(T data) const {
      node* current = root;
      while (current) {
            if (current->data == data) {
                  return true;
            }
            if
      }
}


#endif //STUPIDBINARYTREE_H
