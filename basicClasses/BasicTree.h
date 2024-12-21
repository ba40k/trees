//
// Created by radamir on 18.12.24.
//

#ifndef BASICTREE_H
#define BASICTREE_H
#include "BasicNode.h"

template<typename userType>
class BasicTree {
private:
  BasicNode<userType>* root=nullptr;
public:
  template<typename elementType>
  class BasicIterator {
  public:
    elementType* element = nullptr;
    public:
    virtual elementType& operator*() const = 0;
    virtual void operator++() const = 0;
    virtual bool operator==(const BasicIterator& other) const = 0;
    virtual bool operator!=(const BasicIterator& other) const = 0;
    BasicIterator& operator=(const BasicIterator& other) = delete;
    virtual BasicIterator& operator+(int n) const = 0;
    virtual BasicIterator& operator-(int n) const = 0;
    virtual BasicIterator& operator+=(int n) = 0;
    virtual BasicIterator& operator-=(int n) = 0;
    virtual int operator-(BasicIterator &other) const = 0;
    virtual bool operator>(const BasicIterator& other) const = 0;
    virtual bool operator>=(const BasicIterator& other) const = 0;
    virtual bool operator<(const BasicIterator& other) const = 0;
    virtual bool operator<=(const BasicIterator& other) const = 0;
    virtual ~BasicIterator() = default;
  };
private:
  BasicIterator<BasicNode<userType>> begin_;
  BasicIterator<BasicNode<userType>> end_;
  BasicIterator<BasicNode<userType>> rbegin_;
  BasicIterator<BasicNode<userType>> cend_;
  BasicIterator<BasicNode<userType>> cend_;
public:
  virtual void setBegin(BasicNode<userType> &node) = 0;
  virtual void setEnd(BasicNode<userType> &node) = 0;
  virtual void setRbegin(BasicNode<userType> &node) = 0;
  virtual void setRend(BasicNode<userType> &node) = 0;
  virtual void setCbegin(BasicNode<userType> &node) = 0;
  virtual void setCend(BasicNode<userType> &node) = 0;
  virtual void begin(BasicNode<userType> &node) = 0;
  virtual void end(BasicNode<userType> &node) = 0;
  virtual void rbegin(BasicNode<userType> &node) = 0;
  virtual void rend(BasicNode<userType> &node) = 0;
  virtual void cbegin(BasicNode<userType> &node) = 0;
  virtual void cend(BasicNode<userType> &node) = 0;
  template<typename nodeType>
  class BasicConstIterator : public BasicIterator<nodeType> {
  public:
    ~BasicConstIterator() override = default;

    const nodeType& operator*() const override = 0;
  };
  template<typename nodeType>
  class ReverseBasicIterator : public BasicIterator<nodeType> {
  };
  template<typename nodeType>
  class ConstReverseBasicIterator : public ReverseBasicIterator<nodeType> {
    public:
    const nodeType& operator*() const override = 0;
  };
  virtual void insert() = 0;
  virtual void erase() = 0;
  virtual void find() = 0;
  virtual ~BasicTree()=default;
  
};
#endif //BASICTREE_H
