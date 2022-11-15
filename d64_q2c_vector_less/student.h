#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<iostream>
using std::cout;
template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
    size_t mx = other.size();
    if(mSize > other.size()){
      mx = mSize;
    }
    for(size_t i = 0;i<mx;i++){
      if(i >= mSize){
        return true;
      }
      if(i >= other.size()){
        return false;
      }
      if(mData[i] < other[i]){
        return true;
      }
      if(mData[i] > other[i]){
        return false;
      }
    }
    return false;
  
}

#endif
