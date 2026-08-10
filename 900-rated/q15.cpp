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
    int ans = 0;
    for(int i=n-2;i>=0;i--){
        while(arr[i]>=arr[i+1]){
            ans++;
            arr[i]/=2;
            if(arr[i]==0) break;
        }
        if(arr[i]==0 && arr[i+1]==0){
            ans=-1;
            break;
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