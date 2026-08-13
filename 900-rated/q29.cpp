#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int j=1;j<n-1;j++){
        int i=-1,k=-1;
        for(int ind=0;ind<j;ind++){
            if(arr[ind]<arr[j]){
                i=ind;
                break;
            }
        }
        for(int ind=j+1;ind<n;ind++){
            if(arr[ind]<arr[j]){
                k = ind;
                break;
            }
        }
        if(i!=-1 && k!=-1){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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