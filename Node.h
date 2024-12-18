//
// Created by radamir on 18.12.24.
//
#ifndef NODE_H
#define NODE_H
#include <ios>
#include <ranges>
#include <bits/ios_base.h>

template <typename userType>
class Node<userType> {
private:
    Node* parent;
    Node* leftChild;
    Node* rightChild;
    userType data;
    bool empty;
public:
    Node();
    Node<userType>* getParent() const noexcept;
    Node<userType>* getLeftChild() const noexcept;
    Node<userType>* getRightChild() const;
    userType getData() const;
    bool isEmpty() const;
    void setParent(Node* parent);
    void setLeftChild(Node* left);
    void setRightChild(Node* right);
    void setData(userType data);
    void setEmpty(bool empty);
};
template <typename userType>
Node<userType>::Node() {
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
    data = 0;
    empty = true;
}

template<typename userType>
Node<userType>* Node<userType>::getParent() const noexcept {
    return parent;
}

template<typename userType>
Node<userType>* Node<userType>::getLeftChild() const noexcept{
    return leftChild;
}

#endif //NODE_H
