#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int n,w,a,md;
vector<int> v,subv;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    cin >> n >> w;
    for(int i = 0;i<n;i++){
        cin >> a;
        if(i <= w){
            subv.push_back(a);
        }
        v.push_back(a);
    }
    sort(subv.begin(),subv.end());
    md = subv[w/2];
    cout << md << " ";
    for(int i = 1;i<n-w;i++){
        subv.erase(find(subv.begin(),subv.end(),v[i-1]));
        subv.push_back(v[i+w]);
        sort(subv.begin(),subv.end());
        md = subv[w/2];
        cout << md << " ";
    }
    return 0;
}