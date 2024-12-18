//
// Created by radamir on 18.12.24.
//

#ifndef BASICTREE_H
#define BASICTREE_H
template<typename userType>
class BasicTree {
private:

public:
  template<typename nodeType>
  class BasicIterator {
  private:
    public:
    virtual nodeType operator*() const = delete;
    virtual void operator++() const = delete;
    virtual bool operator==(const BasicIterator& other) const = delete;
    virtual bool operator!=(const BasicIterator& other) const = delete;
    virtual BasicIterator& operator=(const BasicIterator& other) = delete;
    virtual BasicIterator operator+(int n) const = delete;
    virtual BasicIterator operator-(int n) const = delete;
    virtual BasicIterator& operator+=(int n) = delete;
    virtual BasicIterator& operator-=(int n) = delete;
    virtual int operator-(BasicIterator &other) const = delete;
    virtual bool operator>(const BasicIterator& other) const = delete;
    virtual bool operator>=(const BasicIterator& other) const = delete;
    virtual bool operator<(const BasicIterator& other) const = delete;
    virtual bool operator<=(const BasicIterator& other) const = delete;
    virtual ~BasicIterator() = default;
  };

  BasicTree()=delete;
  virtual void add() = delete;
  virtual void remove() = delete;
  virtual void find() = delete;
  virtual ~BasicTree()=default;
};
#endif //BASICTREE_H
