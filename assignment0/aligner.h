//
// Created by Simone Gulyas on 2020. 12. 19..
//

#ifndef C_ALAIGNER_H
#define C_ALAIGNER_H

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
template<typename T >
class aligner {
protected:
    std::vector <std::vector<T>*> myVector;
    T filler;
    long unsigned int mxSize;
public:
    aligner() : filler(T()), mxSize(0) {}
    virtual ~aligner() {};

    void add(std::vector <T> &v) {
        std::vector <T> *p = &v;
        myVector.push_back(p);
        if (mxSize < v.size()) {
            mxSize = v.size();
        }
    }

    virtual void align() = 0;
    int count() const {
        return myVector.size();
    }

    void set_filler ( T filler )  {
        this->filler=filler;
    }

};

template<typename T>
class center_aligner : public aligner<T> {
public:
    void align() override {
        for (long unsigned int i = 0; i < this->myVector.size(); ++i) {

            int reference = (this->mxSize - this->myVector[i]->size()) / 2;
            if(reference>0) {
                this->myVector[i]->resize(this->mxSize, this->filler);
                std::rotate(this->myVector[i]->begin(), this->myVector[i]->end() - reference, this->myVector[i]->end());
            }
        }
    }
};

template<typename T>
class left_aligner : public aligner<T> {
public:
    void align() override {
        for (long unsigned int i = 0; i < this->myVector.size(); ++i) {

            this->myVector[i]->resize(this->mxSize,this->filler);
        }
    }
};
template<typename T>
class right_aligner : public aligner<T> {
public:
    void align() override {
        for (long unsigned int i = 0; i < this->myVector.size(); ++i) {
            int reference = this->myVector[i]->size();
            if(reference>0){
                this->myVector[i]->resize(this->mxSize,this->filler);
                std::rotate(this->myVector[i]->begin(),this->myVector[i]->begin()+reference,this->myVector[i]->end() );
            }
        }
    }
};

#endif //C_ALAIGNER_H
