#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  for(int i = 0;i<mSize;i++){
    if( i >= a && i <= a+(b-a)/2){
      // must swap
      std::swap(mData[(mFront+i)%mCap] , mData[(mFront+a+b-i)%mCap]);
    }
  }
}

#endif
