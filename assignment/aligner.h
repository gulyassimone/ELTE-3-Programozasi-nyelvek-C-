//
// Created by Simone Gulyas on 2020. 12. 19..
//

#ifndef C_ALAIGNER_H
#define C_ALAIGNER_H

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include<iterator>

template<typename T>
class aligner {
protected:
    std::vector<std::vector<T> *> myVector;
    T filler;
    long unsigned int mxSize;
public:
    aligner() : filler(T()), mxSize(0) {}
    aligner(const aligner& rhs);

    virtual ~aligner() {};

    void add(std::vector<T> &v);

    virtual void align() = 0;

    int count() const {
        return myVector.size();
    }

    void set_filler(T filler);

};

template<typename T>
class center_aligner : public aligner<T> {
public:
    void align() override;
};

template<typename T>
class left_aligner : public aligner<T> {
public:
    void align() override;
};

template<typename T>
class right_aligner : public aligner<T> {
public:
    void align() override;
};

template<typename T>
 aligner<T>::aligner(const aligner& rhs) {
    filler=rhs.filler;
    mxSize=rhs.mxSize;
    for(int i = 0; i<rhs.myVector.size; i++){
        myVector[i]=rhs.myVector[i];
    }
}

template<typename T>
void aligner<T>::add(std::vector<T> &v) {
    std::vector<T> *p = &v;
    myVector.push_back(p);
    if (mxSize < v.size()) {
        mxSize = v.size();
    }
}

template<typename T>
void aligner<T>::set_filler(T filler) {
    this->filler = filler;
}

template<typename T>
void center_aligner<T>::align() {
    for (std::vector<T> *temp : this->myVector) {
        int reference((this->mxSize - temp->size()) / 2);
        if (reference > 0) {
            temp->resize(this->mxSize, this->filler);
            std::rotate(temp->begin(), temp->end() - reference, temp->end());
        }
    }
}

template<typename T>
void left_aligner<T>::align() {
    for (std::vector<T> *temp : this->myVector) {
        temp->resize(this->mxSize, this->filler);
    };
}

template<typename T>
void right_aligner<T>::align() {
    for (std::vector<T> *temp : this->myVector)  {
        int reference = temp->size();
        if (reference > 0) {
            temp->resize(this->mxSize, this->filler);
            std::rotate(temp->begin(), temp->begin() + reference, temp->end());
        }
    }
}

#endif //C_ALAIGNER_H
