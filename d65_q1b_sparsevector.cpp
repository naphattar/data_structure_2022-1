#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
    // syntax map.insert(iterator position, const value_type& val);
    map<int,int>::iterator it1 = v.lower_bound(pos);
    pair<int,int> memo[v.size()];
    int cnt = 0;
    for(map<int,int>::iterator it = it1;it != v.end();it++){
        int k = it->first;
        int val = it->second;
        meme[cnt] = make_pair(k+1,val);
        cnt++;
    }
    v.insert(it1,make_pair(pos,value));
    v.erase(it1,v.end());
    for(int i = 0;i<cnt;i++){
        v.insert(v.end(),memo[i]);
    }


}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n;
 map<int,int> v;
 cin >> n;
 for (int i = 0;i < n;i++) {
 int a,b;
 cin >> a >> b;
 insert_into_sv(v,a,b);
 }
 cout << v.size() << "\n";
 for (auto &x : v) {
 cout << x.first << ": " << x.second << "\n";
 }
}