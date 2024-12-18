//
// Created by radamir on 18.12.24.
//

#ifndef BASICTREE_H
#define BASICTREE_H
template<typename T>
class basicTree {
private:

public:
  basicTree()=delete;
  virtual void add() = delete;
  virtual void remove() = delete;
  virtual void find() = delete;
  virtual ~basicTree()=default;
};
#endif //BASICTREE_H
