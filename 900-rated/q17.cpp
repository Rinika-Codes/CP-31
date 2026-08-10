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
    map<ll,int>mpp;
    int maxfreq=0;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        maxfreq=max(maxfreq,mpp[arr[i]]);
    }
    int ans = 0;
    while(maxfreq<n){
        ans+=1;
        if(maxfreq*2<=n){
            ans+=maxfreq;
            maxfreq*=2;
        }else{
            ans+=(n-maxfreq);
            maxfreq=n;
        }
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