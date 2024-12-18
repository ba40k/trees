//
// Created by radamir on 18.12.24.
//

#ifndef BASICITERATOR_H
#define BASICITERATOR_H
template<typename userType>
class BasicIterator<userType> {
private:
    userType *currentElement;
public:
    void advance(int num) = delete;
    virtual BasicIterator next() = delete;
    virtual BasicIterator previous() = delete;
    userType operator*() const;
};
#endif //BASICITERATOR_H
