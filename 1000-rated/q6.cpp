#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=(arr[i]<=q)?1:0;
    }
    ll cnt1=0;
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1) cnt1++;
        else{
            if(cnt1>=k){
                ll diff = cnt1-k+1;
                ans += (diff*(diff+1))/2;
            }
            cnt1=0;
        }
    }
    if(cnt1>=k){
        ll diff = cnt1-k+1;
        ans += (diff*(diff+1))/2;
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