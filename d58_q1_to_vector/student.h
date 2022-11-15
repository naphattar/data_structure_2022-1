#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  for(int i = 0;(i<k) && (i<mSize);i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  T *newData = new T[to-from]();
  for(auto it = from ;it != to;it++){
    newData[it-from] = *it;
  }
  mSize = to-from;
  mCap = mSize;
  mFront = 0;
  mData = newData;
}

#endif
