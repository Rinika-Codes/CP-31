#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>pref(n,0);
    int white = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='W') white++;
        pref[i] = white;
    }
    ll ans = pref[k-1];

    for(int i=k;i<n;i++){
        ans = min(ans, (ll)(pref[i]-pref[i-k]));
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