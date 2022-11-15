#include<iostream>
#include<cmath>
using namespace std;
int n,k;
long long ans = 1;
int main(){
    cin >> n;
    k = log2(n);
    if(pow(2,k) < n){
        k++;
    }
    ans = pow(2,k)-n;
    cout << ans << endl;
    return 0;
}