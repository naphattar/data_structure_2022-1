#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
//DO NOT INCLUDE ANYTHING
template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
    size_t cnt = 0;
    auto it = first;
    while(it != last){
      cnt++;
      it++;
    }
    T *Data = new T[cnt]();
    this->mSize = cnt;
    this->mCap = cnt; 
    auto it2 = first;
    size_t cnt2 = 1;
    while(it2 != last){
      Data[cnt-cnt2] = *it2;
      it2++;
      cnt2++;
    }
    this->mData = Data;
}

#endif
