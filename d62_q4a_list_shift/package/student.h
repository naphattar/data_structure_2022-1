#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  node* movenode = mHeader->next;
  mHeader->next->next->prev = mHeader;
  mHeader->next = mHeader->next->next;
  mHeader->prev->next = movenode;
  movenode->prev = mHeader->prev;
  mHeader->prev = movenode;
  movenode->next = mHeader;
}

#endif
