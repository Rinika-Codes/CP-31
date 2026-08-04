#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll>prefix(n);
    prefix[0]=arr[0];
    for(ll i=1;i<n;i++){
        prefix[i] = arr[i]+prefix[i-1];
    }
    while(q--){
        int l,r,k;
        cin>>l>>r>>k;
        l--;r--;
        ll sum = prefix[r];
        ll sub= (l==0)?0: prefix[l-1];
        ll diff = sum-sub;
        ll ans=prefix[n-1]-diff;
        ans+=(r-l+1)*k;
        if(ans%2==0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
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