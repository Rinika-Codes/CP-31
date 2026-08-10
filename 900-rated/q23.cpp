#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans = arr[0];
    for(int i=1;i<n;i++){
        ans&=arr[i];
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