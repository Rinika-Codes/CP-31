#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<ll>brr(n);
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    vector<ll>arr;
    arr.push_back(brr[0]);
    for(int i=1;i<n;i++){
        if(brr[i-1]>brr[i]){
            arr.push_back(brr[i]);
            arr.push_back(brr[i]);
        }else{
            arr.push_back(brr[i]);
        }
    }
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
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