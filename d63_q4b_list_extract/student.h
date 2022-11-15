#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  /*
  while(a!=b){
    if(a.ptr->data == value){
      // must delete 
      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      iterator it = a;
      it++;
      node *n = new node();
      n->data = a.ptr->data;
      // push it t output
      (output.mHeader)->next->prev = n;
      n->next = (output.mHeader)->next;
      (output.mHeader)->next = n;
      n->prev = (output.mHeader);
      output.mSize++;
      mSize--;
      delete a.ptr;
      a = it;
    }else{
      a++;
    }
  }
  */
 for(iterator it = a;it!= b;++it){
  if(it.ptr->data == value){
    // must delete 
    iterator it2 = it;
    it.ptr->prev->next = it.ptr->next;
    it.ptr->next->prev = it.ptr->prev;
    mSize--;
    // insert to output
    node* n = new node(value,output.mHeader,(output.mHeader)->next);
    (output.mHeader)->next->prev = n;
    (output.mHeader)->next = n;
    output.mSize++;
    delete it.ptr;
    it = it2;

  }
 }
}

#endif
