#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mpp1,mpp2;
    vector<int>pref(n),suff(n);
    for(int i=0;i<n;i++){
        mpp1[s[i]]++;
        pref[i]=mpp1.size();
    }
    for(int i=n-1;i>=0;i--){
        mpp2[s[i]]++;
        suff[i]=mpp2.size();
    }
    int ans = -1;
    for(int i=1;i<n;i++){
        ans = max(ans, pref[i-1]+suff[i]);
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