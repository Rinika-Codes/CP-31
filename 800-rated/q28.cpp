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
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[n-1]){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
        cout<<arr[n-1]<<" ";
        for(int i=0;i<n-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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