#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll l = arr[0]-x;
    ll r = arr[0]+x;
    ll cnt = 0;
    for(ll i=1;i<n;i++){
        ll newl = arr[i]-x;
        ll newr = arr[i]+x;
        l = max(l,newl);
        r = min(r,newr);
        if(l>r){
            cnt++;
            l = newl;
            r = newr;
        }
    }
    cout<<cnt<<endl;
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