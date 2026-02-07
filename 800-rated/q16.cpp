#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(!is_sorted(arr.begin(),arr.end())){
        cout<<0<<endl;
        return;
    }
    int mindiff=INT_MAX;
    for(int i=1;i<n;i++){
        mindiff=min(mindiff,arr[i]-arr[i-1]);
    }
    int ans=(mindiff/2)+1;
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