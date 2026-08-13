#include<bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll mini=0,maxi=0;
    for(int i=0;i<n;i++){
        maxi += ceil( arr[i]*1.0 /x);
        mini+=arr[i];
    }
    mini = ceil( mini*1.0 /x);
    cout<<mini<<" "<<maxi<<endl;
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