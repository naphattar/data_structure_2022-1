#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const{
  CP::priority_queue<T,Comp> pq1 (*this);
  CP::priority_queue<T,Comp> pq2 (other);
  if(pq1.size() != pq2.size()){
    return false;
  }
  while(!pq1.empty()){
    if(pq1.top() != pq2.top()){
        return false;
    }
    pq1.pop();
    pq2.pop();
  }
  return true;
}

#endif
