#include<bits/stdc++.h>
#include<math.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int zeros=0,ones=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeros++;
        }else if(arr[i]==1){
            ones++;
        }
    }
    ll ways= pow(2,zeros)*ones;
    cout<<ways<<endl;
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