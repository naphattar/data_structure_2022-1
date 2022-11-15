#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  int count = 0;
  for(iterator it = begin() ;it != end();++it){
    node* thisnode = it.ptr;
    if(thisnode->data == value){
      // must delete 
      mSize--;
      thisnode->prev->next = thisnode->next;
      thisnode->next->prev = thisnode->prev;
      delete thisnode;
    }
  }
}

#endif
