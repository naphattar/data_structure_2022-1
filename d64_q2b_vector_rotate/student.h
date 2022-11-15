#ifndef __STUDENT_H_
#define __STUDENT_H_
template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    int md = last-first; 
    int start = first - &mData[0];
    if(md == 0 || k == 0){
      return;
    }
    k = k%md;
    T *cData = new T[k]();
    for(int i = 0;i<k;i++){
      cData[i] = mData[start+i];
    }
    for(int i = k;i<md;i++){
      mData[start+i-k] = mData[start+i];
    }
    for(int i = 0;i<k;i++){
      mData[start+md-k+i] = cData[i];
    }
    delete[] cData;
}
#endif
