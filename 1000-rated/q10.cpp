#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    char c;
    cin>>n>>c;
    string t;
    cin>>t;
    string s = t+t;
    ll lastind = 2*n+1;
    ll ans = 0;
    for(ll i=0;i<2*n;i++){
        if(s[i]=='g'){
            if(lastind != 2*n+1){
                ans = max(ans, i-lastind);
                lastind = 2*n+1;
            }
        }else if(s[i]==c){
            lastind = min(lastind, i);
        }
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