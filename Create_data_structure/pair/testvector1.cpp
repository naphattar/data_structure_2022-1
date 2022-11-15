#include "vector.h"
#include<iostream>
using namespace std;
int main(){
    CP::vector<int> v;
    int n,m;
    cin >> n;
    m = n;
    while(m--){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0;i<n;i++){
        cout << v[i] << " ";
    }
    v.clear();
    cout << "\n" <<  "after clear " << "\n";
    for(int i = 0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}
