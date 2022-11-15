#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  size_t m = mSize;
  T *v = mData;
  mData = new T[2*m+1]();
  for(size_t i = 0;i<m;i++){
    mData[i] = v[i];
    mData[m+i] = v[m-1-i]; 
  }
  delete []v;
  mSize = 2*m;
  mCap = mSize+1;
}

#endif
