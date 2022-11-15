#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,k;
  cin >> n >> k;
  int res;
  if(k == 1){
    res = n-1;
  }else{
    res = 0;
    long long summ = 1;
    while(summ < n){
      res++;
      summ = k*summ+1;
    }

  }
  cout << res;
  return 0;
}