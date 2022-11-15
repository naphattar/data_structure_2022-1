#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        stack<T> p;
        while( ! empty()){
            p.push(top());
            pop();
        }while( ! s.empty()){
            p.push(s.top());
            s.pop();
        }
        while( ! p.empty()){
            push(p.top());
            p.pop();
        }
        return;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> p;
        while( ! empty()){
            p.push(top());
            pop();
        }
        while( ! q.empty()){
            p.push(q.front());
            q.pop();
        }
        while(! p.empty()){
            push(p.top());
            p.pop();
        }
        return;
        
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while( ! q.empty()){
            push(q.front());
            q.pop();
        }
        return;
    }
}
