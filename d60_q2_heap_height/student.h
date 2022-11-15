#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  if(mSize <= 1){
    return mSize-1;
  }
  int summ = 1;
  int res = 0;
  while(mSize> summ){
    summ = 2*summ+1;
    res++;
  }
  return res;
}

#endif

