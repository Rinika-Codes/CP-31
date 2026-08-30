#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,d;
    cin>>n>>d;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll l =0, r = n-1;
    ll ans = 0;
    while(l<=r){
        ll sum=arr[r];
        while(l<r && sum<=d){
            sum+=arr[r];
            l++;
        }
        if(sum>d){
            ans++;

        }
        r--;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
}