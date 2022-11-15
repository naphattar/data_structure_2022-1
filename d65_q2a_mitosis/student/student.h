#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    stack<T> cmp1,cmp2;
    int cnt = 0;
    while(cnt <= b){
        if(cnt >= a){
            cmp1.push(top());
            cmp1.push(top());
        }else{
            cmp1.push(top());
        }
        pop();
        cnt++;
    }
    while(! cmp1.empty()){
        push(cmp1.top());
        cmp1.pop();
    }
    
}

#endif