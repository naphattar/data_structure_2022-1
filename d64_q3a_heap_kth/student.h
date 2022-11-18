#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  std::vector<T> res;
  for(int i = 0; && i<mSize && i<=6;i++){
    res.push_back(mData[i]);
  }
  std::sort(res.begin(),res.end(),Comp);
  std::reverse(res.begin(),res.end());
  return res[k-1];
}

#endif
