#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    vector<int>hash(26,0);
    for(int i=0;i<t.size();i++){
        hash[t[i]-'A']++;
    }
    for(int i=s.size()-1;i>=0;i--){
        if(hash[s[i]-'A']>0){
            hash[s[i]-'A']--;
        }else{
            s[i]='.';
        }
    }
    string final = "";
    for(int i=0;i<s.size();i++){
        if(s[i]!='.'){
            final+=s[i];
        }
    }
    if(final == t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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