#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  T *newData = new T[mSize + (size_t)(last - first)]();
  
  for(size_t i = 0;i<(position - &mData[0]);i++){
    newData[i] = mData[i];
  }
  int cnt = 0;
  for(size_t i = 0;i<last - first;i++){
    newData[position-&mData[0]+i] = *(first+cnt);
    cnt++;
  }
  for(size_t i = mSize-1+cnt;i>=cnt+(position - &mData[0]);i--){
    newData[i] = mData[i-cnt];
  }
  delete [] mData;
  mData = newData;
  mSize = mSize +last - first;
  mCap  = mSize;
}

#endif
