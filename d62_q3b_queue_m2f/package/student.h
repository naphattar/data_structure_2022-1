#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    if(pos == 0){
        return;
    }
    T qpos = mData[(mFront+pos)%mCap];
    for(int i = pos-1;i>=0;i--){
        mData[(mFront+i+1)%mCap] = mData[(mFront+i)%mCap];
    }
    mData[mFront] = qpos;
    return;
}

#endif
