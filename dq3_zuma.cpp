#include<iostream>
#include<list>
using namespace std;
int n,k,value,a,count = 1;
list<int> zfront,zback;
bool notdone = true;
void solve(){
    while(zfront.size() > 0 && zfront.back() == value){
        count++;
        zfront.pop_back();
    }
    while(zback.size() > 0 && zback.front() == value){
        count++;
        zback.pop_front();
    }
    //cout << "count = " << count << endl;
    if(count >= 3){
        if(zfront.size() > 0 && zback.size() > 0 && zfront.back() == zback.front()){
            value = zfront.back();
            count = 1;
        }else{
            notdone = false;
        }
    }else{
        while(count--){
            zfront.push_back(value);
            notdone = false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false) , cin.tie(nullptr);
    cin >> n >> k >> value;
    for(int i = 0;i<n;i++){
        cin >> a;
        if(i < k){
            zfront.push_back(a);
        }else{
            zback.push_back(a);
        }
    }
    while(notdone){
        solve();
    }
    for(list<int>::iterator it = zfront.begin();it != zfront.end();it++){
        cout << *it << " ";
    }
    for(list<int>::iterator it = zback.begin();it != zback.end();it++){
        cout << *it << " ";
    }
    // for debugging
    /*
    cout << "zfront: ";
    for(auto it = zfront.begin();it != zfront.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "zback: ";
    for(auto it = zback.begin();it != zback.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    */
    return 0;
}