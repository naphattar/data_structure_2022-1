#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    int m = mSize/k;
    int r = mSize-k*m;
    std::vector<std::vector<T>> res;
    int start = mSize-1;
    for(int i = 0;i<k;i++){
      std::vector<T> v;
      int s = m;
      if(i < r){
        s++;
      }
      for(int j = start;j>start-s;j--){
        v.push_back(mData[j]);
      }
      start = start-s;
      res.push_back(v);
    }
    return res;
}
#endif
