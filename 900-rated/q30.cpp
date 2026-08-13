#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') zero++;
        else one++;
    }
    int ops= min(zero,one);
    if(ops%2==1){
        cout<<"DA"<<endl;
    }else{
        cout<<"NET"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}