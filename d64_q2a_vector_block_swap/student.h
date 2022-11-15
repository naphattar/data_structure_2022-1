#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  int na = a-&mData[0];
  int nb = b-&mData[0];
  if( na < 0 || na >= mSize || nb <0 || nb >= mSize || m <= 0 || na == nb){
    return false;
  }
  if(na < nb){
    if(na +m-1 >= nb){
      return false;
    }
  }else{
    if(nb +m-1 >= na){
      return false;
    }
    std::swap(na,nb);
  }
  for(int i = 0;i<m;i++){
    std::swap(mData[na+i],mData[nb+i]);
  }
  return true;
}
#endif
