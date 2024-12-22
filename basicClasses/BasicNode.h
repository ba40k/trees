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
    virtual BasicNode* getAncestor() const noexcept = 0;
    virtual userType getData() const = 0;
    [[nodiscard]] virtual bool isEmpty() const = 0;
    virtual void setAncestor(BasicNode* ancector_) = 0;
    virtual BasicNode* getDescendant(int i);
    virtual BasicNode* getAncestor();
    virtual void setDescendant(BasicNode* descendant_);
    virtual void setData(userType data) = 0;
    virtual void setEmpty(bool empty) = 0;
    virtual ~BasicNode() = 0;
};



#endif //NODE_H
