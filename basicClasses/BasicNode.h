//
// Created by radamir on 18.12.24.
//
#ifndef NODE_H
#define NODE_H
#include <ios>
#include <ranges>
#include <bits/ios_base.h>

template <typename userType>
class BasicNode<userType> {
private:
    BasicNode* parent;
    BasicNode* leftChild;
    BasicNode* rightChild;
    userType data;
    bool empty;
public:
    BasicNode();
    BasicNode<userType>* getParent() const noexcept;
    BasicNode<userType>* getLeftChild() const noexcept;
    BasicNode<userType>* getRightChild() const;
    userType getData() const;
    bool isEmpty() const;
    void setParent(BasicNode* parent);
    void setLeftChild(BasicNode* left);
    void setRightChild(BasicNode* right);
    void setData(userType data);
    void setEmpty(bool empty);
};
template <typename userType>
BasicNode<userType>::BasicNode() {
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
    data = 0;
    empty = true;
}

template<typename userType>
BasicNode<userType>* BasicNode<userType>::getParent() const noexcept {
    return parent;
}

template<typename userType>
BasicNode<userType>* BasicNode<userType>::getLeftChild() const noexcept{
    return leftChild;
}

#endif //NODE_H
