#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>t;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());
    cin >> n >> m;
    if(n == m){
        for(int i = 0;i<n;i++){
            cout << 0 << " ";
        }
        return 0;
    }
    for(int i = 0;i<n;i++){
        int ti;
        cin >> ti;
        t.push_back(ti);
    }
    int cnt = 0,customer = 0;
    while(customer < m){
        for(int i = 0;i<n;i++){
            if(cnt%t[i] == 0){
                q.push(i);
            }
        }
        while( !q.empty() && customer < m){
            q.pop();
            cout << cnt << " ";
            customer++;
        }
        cnt++;
    }
    return 0;
}