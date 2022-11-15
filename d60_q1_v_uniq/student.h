#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include<set>

template <typename T>
void CP::vector<T>::uniq() {
  //do something here
  T *newData = new T[mSize]();
  size_t cnt = 0;
  std::set<T> s;
  for(size_t i = 0;i<mSize;i++){
    if(s.find(mData[i]) == s.end()){
      s.insert(mData[i]);
      newData[cnt] = mData[i];
      cnt++;
    }
  }
  delete [] mData;
  mData = newData;
  mSize = cnt;
  mCap = cnt;
}

#endif
