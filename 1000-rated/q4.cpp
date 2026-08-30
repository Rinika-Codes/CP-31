#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n ;
    cin>>n;
    vector<int>sec;
    int minel = INT_MAX;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        minel = min(minel, arr[0]);
        sec.push_back(arr[1]);
    }
    sort(sec.begin(),sec.end());
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum+=sec[i];
    }
    ll ans = sum - sec[0] + minel;
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