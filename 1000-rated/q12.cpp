#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    ll mins= k*b;
    ll maxs = mins+ n*(k-1);
    if(s<mins || s>maxs){
        cout<<-1<<endl;
        return;
    }
    vector<ll>arr(n,0);
    arr[n-1] = k*b;
    s-=(k*b);
    for(int i=0;i<n;i++){
        ll add=min(s,(k-1));
        arr[i]+=add;
        s-=add;
        if(s==0) break;
    }
    for(ll i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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