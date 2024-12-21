//
// Created by radamir on 18.12.24.
//
#ifndef NODE_H
#define NODE_H
#include <vector>
template <typename userType>
class BasicNode<userType> {
private:
    BasicNode* ancestor = nullptr;
    std::vector<BasicNode*> descendants;
    userType data;
    bool empty = true;
public:
    virtual BasicNode* getParent() const noexcept = 0;
    virtual BasicNode<userType>* getLeftChild() const noexcept = 0;
    virtual BasicNode<userType>* getRightChild() const = 0;
    virtual userType getData() const = 0;
    [[nodiscard]] virtual bool isEmpty() const = 0;
    virtual void setParent(BasicNode* parent) = 0;
    virtual void setLeftChild(BasicNode* left) = 0;
    virtual void setRightChild(BasicNode* right) = 0;
    virtual void setData(userType data) = 0;
    virtual void setEmpty(bool empty) = 0;
    virtual ~BasicNode() = 0;
};



#endif //NODE_H
