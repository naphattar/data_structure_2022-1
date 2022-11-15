#include <vector>
#include <map>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<T,bool> mp;
    for(int i = 0;i<A.size();i++){
        v.push_back(A[i]);
        mp[A[i]] = 1;
    }
    for(int i = 0;i<B.size();i++){
        if(! mp.count(B[i])){
            v.push_back(B[i]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<T,bool> mp;
    for(int i = 0;i<B.size();i++){
        mp[B[i]] = 1;
    }
    for(int i = 0;i<A.size();i++){
        if(mp.count(A[i])){
            v.push_back(A[i]);
        }
    }
    return v;
}
