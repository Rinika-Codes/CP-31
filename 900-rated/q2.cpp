#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>hash(26,0);
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        cnt+=(hash[i]%2);
    }
    if(cnt>k+1){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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