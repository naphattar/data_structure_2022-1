#include<bits/stdc++.h>
using namespace std;
int n,m,a,U,I,V;
char act;
vector<int> k;
vector<pair<int,int>> auct[1000000];
set<int> res[1000000];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    //for debugging very big input
    ifstream in("input.txt");
    cin.rdbuf(in.rdbuf());
    ofstream out("output.txt");
    cout.rdbuf(out.rdbuf());
    
    cin >> n >> m >> a;
    for(int i = 0;i<n;i++){
        cin >> U;
        k.push_back(U);
    }
    while(a--){
        cin >> act;
        if(act == 'B'){
            cin >> U >> I >> V;
            U-- ; I--;
            bool sold = false;
            for(int i = 0;i<auct[I].size() && !sold;i++){
                if(auct[I][i].second == U){
                    auct[I][i].first = V;
                    sold = true;
                }
            }
            if(! sold){
                auct[I].push_back(make_pair(V,U));
            }
        }else{
            cin >> U >> I;
            I--; U--;
            for (auto it = auct[I].begin(); it != auct[I].end();it++){
                pair<int,int> p = *it;
                if(p.second == U){
                    auct[I].erase(it);
                    break;
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        sort(auct[i].begin(),auct[i].end(),greater<pair<int,int>>());
        auto it = auct[i].begin();
        for(int j = 0;j<k[i] && it != auct[i].end();j++){
            pair<int,int> p = *it;
            res[p.second].insert(i+1);
            it++;
        }
    }
    for(int i = 0;i<m;i++){
        if(res[i].size() > 0){
            for(auto s : res[i]){
                cout << s << " ";
            }
        }else{
            cout << "NONE";
        }
        cout << "\n";
    }
    return 0;
}