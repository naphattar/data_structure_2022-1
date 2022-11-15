#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
#include <iostream>
template <typename T>
void CP::queue<T>::back_to_front() {
  if(mSize == 0){
    return;
  }
  mData[(mFront+mCap-1)%mCap] = mData[(mFront+mSize-1)%mCap];
  mFront = (mFront+mCap-1)%mCap;

}

#endif
