#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n*k);
    for(int i=0;i<(n*k);i++){
        cin>>arr[i];
    }
    ll ptr = n*k;
    ll sum = 0;
    while(k--){
        ptr-=(n/2+1);
        sum+=arr[ptr];
    }
    cout<<sum<<endl;
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