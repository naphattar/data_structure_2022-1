#include<bits/stdc++.h>
using namespace std;
int n,m,l;
int k[100000];
set<string> allword;
void convert(string &word){
    int a = word.size();
    for(int i = 0;i<a;i++){
        char c = word[i];
        c = c-97-k[i];
        if(c < 0){
            c = c+26;
        }
        c = c%26+97;
        word[i] = c;
    }
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr);
    cin >> n >> m >> l;
    for(int i = 0;i<l;i++){
        cin >> k[i];
        k[i] = k[i]%26;
    }
    string word;
    for(int i = 0;i<n;i++){
        cin >> word;
        convert(word);
        allword.insert(word);
    }
    while(m--){
        cin >> word;
        bool found = 0;
        set<string>::iterator it = allword.find(word);
        if(it != allword.end()){
            cout << "Match" << "\n";
        }else{
            cout << "Unknown" << "\n";
        }
    }
    return 0;
}