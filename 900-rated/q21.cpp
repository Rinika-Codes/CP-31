#include<bits/stdc++.h>
#define ll long long

using namespace std;

int min_ops(string num, string s){
    int ind=s.size()-1;
    int ops=0;
    for(int i=num.size()-1;i>=0;i--){
        if(num[i]==s[ind]){
            ind--;
            if(ind<0) break;
        }else{
            ops++;
        }
    }
    if(ind>=0){
        ops=INT_MAX;
    }
    return ops;
}

void solve(){
    string n;
    cin>>n;
    vector<string>poss = {"00","25","50","75"};
    int ans = INT_MAX;
    for(int i=0;i<4;i++){
        ans=min(ans,min_ops(n,poss[i]));
    }
    cout<<ans<<endl;
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