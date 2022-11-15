#include<bits/stdc++.h>
using namespace std;
int n,a;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    cin >> n >> a;
    vector<int> res;
    res.push_back(a);
    bool bk = false;
    for(int i = 1;(i<=log2(n)) && (!bk);i++){
        for(int md = pow(2,i)-1;md<= pow(2,i+1)-2;md++){
            int k = pow(2,i)*a+md;
            if(k < n){
            res.push_back(k);
            }else{
                bk = true;
                break;
            }
        }
    }
    cout << res.size() << "\n";
    for(auto g : res){
        cout << g << " ";
    }
    return 0;
}