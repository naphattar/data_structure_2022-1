#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  // return 
  size_t pos = (mFront+idx)%mCap;
  if(idx < 0){
    pos = (mFront+mSize+idx+mCap)%mCap;
  }
  return mData[pos];
}

#endif
