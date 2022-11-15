#include<bits/stdc++.h>
using namespace std;
int n,m,a;
map<int,int> mp;
int main(){
    ios_base::sync_with_stdio(false) , cin.tie(nullptr);
    cin >> n >> m;
    while(n--){
        cin >> a;
        if(mp.count(a)){
            mp[a]++;
        }else{
            mp[a] = 1;
        }
    }
    while(m--){
        bool work = false;
        cin >> a;
        for(map<int,int>::iterator it = mp.begin();it != mp.end() && !work;it++){
            if(it-> first <= a){
                if(it->second >= 2 && (2*(it->first) == a)){
                    work = true;
                    break;
                }
                map<int,int>::iterator it2 = mp.lower_bound(a-(it->first));
                if(it2 != it || it->second >=2 ){
                    if(it2->first + it->first == a){
                        work = true;
                        break;
                    }
                }
            }else{
                break;
            }
        }
        if(work){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}