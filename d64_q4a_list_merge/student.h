#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  int count = 0;
  auto it = ls.begin();
  while(count < ls.size()){
    // merge list
    mHeader->prev->next = it->mHeader->next;
    it->mHeader->next->prev = mHeader->prev;
    it->mHeader->prev->next = mHeader;
    mHeader->prev = it->mHeader->prev;

    mSize = mSize + (it->mSize);
    // clear old list 
    it->mHeader->next = it->mHeader;
    it->mHeader->prev = it->mHeader;
    it->mSize = 0;
    // move to next index
    count++;
    it++;
  }
}

#endif
