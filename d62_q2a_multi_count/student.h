#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> res;
    using std::map;
    map<T,size_t> mp;
    for(int i = mFront;i<mFront+mSize;i++){
        if(mp.count(mData[i%mCap])){
            mp[mData[i%mCap]]++;
        }else{
            mp[mData[i%mCap]] = 1;
        }
    }
    for(int i = 0;i<k.size();i++){
        res.push_back(std::make_pair(k[i],mp[k[i]]));
    }
    return res;
}

#endif
