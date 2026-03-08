#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll maxtime=b;
    for(ll i=0;i<n;i++){
        maxtime+=min(arr[i],a-1);
    }
    cout<<maxtime<<endl;
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