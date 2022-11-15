#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T qpos = mData[(mFront+pos)%mCap];
  for(size_t i = pos+1;i<mSize;i++){
    mData[(mFront+i-1+mCap)%mCap] = mData[(mFront+i+mCap)%mCap];
  }
  mData[(mFront+mSize-1)%mCap] = qpos;
}

#endif
