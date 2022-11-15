#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  if(pos.size() == 0){
    return;
  }
  T *newData = new T[mSize-pos.size()]();
  for(int i = 0;i<pos[0];i++){
    newData[i] = mData[i];
  }
  int del = 0; // del is the amount of index we have deleted
  for(int i = pos[0];i<mSize;i++){
    if((del < pos.size()) &&(i == pos[del])){
      del++;
    }else{
      newData[i-del] = mData[i];
    }
  }
  delete[] mData;
  mData = newData;
  mSize = mSize-pos.size();
  mCap = mSize;
}

#endif
