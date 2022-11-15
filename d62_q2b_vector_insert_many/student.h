#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  std::sort(data.begin(),data.end());
  T *newData = new T[mSize+data.size()]();
  size_t cnt = 0;
  for(size_t i = 0;i<mSize+data.size();i++){
    if((cnt < data.size()) && (i == data[cnt].first + cnt)){
      newData[i] = data[cnt].second;
      cnt++;
    }else{
      newData[i] = mData[i-cnt];
    }
  }
  delete [] mData;
  mData = newData;
  mSize = mSize+data.size();
  mCap = mSize;
}

#endif
