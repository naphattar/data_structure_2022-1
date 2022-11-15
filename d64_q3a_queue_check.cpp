#include<bits/stdc++.h>
using namespace std;
int n,mFront,mSize,mCap,last,crr;
bool valid(){
    if( mSize > mCap || mFront >= mCap || last >= mCap){
        cout << "WRONG ";
        return false;
    }
    if(last == (mFront+mSize)%mCap){
        cout << "OK ";
        return true;
    }
    cout << "WRONG ";
    return false;
}
int main(){
    ios_base::sync_with_stdio(false) , cin.tie(nullptr);
    cin >> n;
    while(n--){
        cin >> mFront >> mSize >> mCap >> last >> crr;
        bool check = valid();
        switch(crr){
            case 0:
                break;
            case 1:
                if(!check){
                    cout << (last - mSize +mCap)%mCap;
                }
                break;
            case 2:
                if(! check){
                    cout << (last - mFront+mCap)%mCap;
                }
                break;
            case 3:
                if(! check){
                    if(last >= mFront+mSize){ 
                        cout << max(mSize+1,last+1);
                    }else{
                        cout << (mFront+mSize)-last;
                    }
                }
                break;
            case 4:
                if(!check){
                    cout << (mFront+mSize)%mCap;
                }
                break;
            default:
                break;
        }
        cout << "\n";
    }
    return 0;
}