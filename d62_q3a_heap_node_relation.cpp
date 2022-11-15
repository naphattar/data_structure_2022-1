#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;

void solve(int a,int b){
    bool notswap = true;
    if(b == a){
        cout << "a and b are the same node" << "\n";
        return;
    }
    if(a > b){
        notswap = false;
        swap(a,b);
    }
    if(a == 0){
        if(notswap){
            cout << "a is an ancestor of b\n";
        }else{
            cout << "b is an ancestor of a\n";
        }
        return;
    }
    bool checkp = false;
    for(int i = 1;i<= log2(n);i++){
        int dv = pow(2,i);
        int md = b-dv*a;
        if((md >= dv-1) && (md <= 2*dv-2)){
            checkp = true;
            break;
        }
    }
    if(checkp){
        if(notswap){
            cout << "a is an ancestor of b\n";
        }else{
            cout << "b is an ancestor of a\n";
        }
    }else{
        cout << "a and b are not related\n";
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        solve(a,b);
    }
    return 0;
}