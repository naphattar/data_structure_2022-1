#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if(it == end()){
    return result;
  }
  node* movenode = it.ptr;
  mHeader->prev->next = result.mHeader;
  result.mHeader->prev = mHeader->prev;
  movenode->prev->next = mHeader;
  mHeader->prev = movenode->prev;
  movenode->prev = result.mHeader;
  result.mHeader->next = movenode;

  // fix booth list size
  result.mSize = mSize-pos;
  mSize = mSize - result.size();

  return result;
}

#endif
