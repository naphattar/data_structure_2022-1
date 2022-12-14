#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<bits/stdc++.h>
#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(size_t i = 0;i<mSize;i++){
    if(mData[i] == k){
      return true;
    }
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  if(mSize == 0){
    return -1;
  }
  for(int i = mSize-1;i>=0;i--){
    if(mData[i] == k){
      int deep = 0;
      while(i > 0){
        i = (i-1)/2;
        deep++;
      }
      return deep;
    }
  }
  return -1;
}

#endif

