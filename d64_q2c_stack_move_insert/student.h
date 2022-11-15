#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    if(m == 0){
        return;
    }
    if(m >= s2.size()){
        m = s2.size();
    }
    CP::stack<T> rep1,rep2;
    while(k>0){
        rep1.push(top());
        pop();
        k--;
    }
    while(m >0){
        rep2.push(s2.top());
        s2.pop();
        m--;
    }
    while(!rep2.empty()){
        push(rep2.top());
        rep2.pop();
    }
    while(!rep1.empty()){
        push(rep1.top());
        rep1.pop();
    }
    return;
}
#endif
