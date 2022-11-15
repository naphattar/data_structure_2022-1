#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  while(mSize > 0 && K > 0){
    mSize--;
    K--;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  std::stack<T> s1,res;
  while(mSize > 0 && K >0){
    s1.push(mData[mSize-1]);
    mSize--;
    K--;
  }
  while(! s1.empty()){
    res.push(s1.top());
    s1.pop();
  }
  return res;
}

#endif
