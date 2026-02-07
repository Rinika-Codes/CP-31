#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<endl;
        cout<<x<<endl;
        return;
    }
    cout<<2<<endl;
    cout<<1<<" "<<x-1<<endl;
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