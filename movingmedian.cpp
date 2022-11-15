#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int n,w,a,md,od,nw,fr,bk;
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
    fr = subv[w/2-1];
    bk = subv[w/2+1];
    cout << md << ' ';
    for(int i = 1;i<n-w;i++){
        od = v[i-1];
        nw = v[w+i];
        if(od <= md){
            if(nw >= md){
                if(nw < bk){
                    fr = md;
                    md = nw;
                }else{
                    fr = md;
                    md = bk;
                    bk = nw;
                }
            }else{
                if(fr < nw){
                    fr = nw;
                }
            }
        }else{
            if(nw < md){
                if(nw > fr){
                    bk = md;
                    md = nw;
                }else{
                    bk = md;
                    md = fr;
                    fr = nw;
                }
            }
        }
        cout << md << " ";
    }
    return 0;
}
