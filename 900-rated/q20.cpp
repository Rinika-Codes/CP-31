#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    if(s[0]!=s[n-1]){
        s[0]=s[n-1];
    }
    cout<<s<<endl;
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