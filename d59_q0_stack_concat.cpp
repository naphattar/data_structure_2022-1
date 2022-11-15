#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void stack_concat(stack<int> &s1, stack<int> &s2) {
    stack<int> c1,c2;
    while(! s1.empty()){
        int k = s1.top();
        c1.push(k);
        s1.pop();
    }
    while(! s2.empty()){
        int k = s2.top();
        c2.push(k);
        s2.pop();
    }
    while(! c2.empty()){
        int k = c2.top();
        s1.push(k);
        c2.pop();
    }
    while(! c1.empty()){
        int k = c1.top();
        s1.push(k);
        c1.pop();
    }
}
int main() {
 //read input
 int n,m;
 int c;
 cin >> n >> m;
 stack<int> s1,s2;
 for (int i = 0;i < n;i++) {
 cin >> c;
 s1.push(c);
 }
 for (int i = 0;i < m;i++) {
 cin >> c;
 s2.push(c);
 }
 //call the function
 stack_concat(s1,s2);
 //display content of the stack
 cout << "S1 has " << s1.size() << endl;
 while (!s1.empty()) {
 cout << s1.top() << " ";
 s1.pop();
 }
 cout << endl;
 //display content of the stack
 cout << "S2 has " << s2.size() << endl;
 while (!s2.empty()) {
 cout << s2.top() << " ";
 s2.pop();
 }
 cout << endl;
}