#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    if(mCap-mSize < other.mCap - other.size()){
        return -1;
    }
    if(mCap - mSize == other.mCap - other.size()){
        return 0;
    }
    return 1;
}

#endif
