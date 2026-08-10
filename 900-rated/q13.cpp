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
    int zeros=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zeros++;
    }
    int left = 0, right = n-1;
    while(left < n && arr[left]==0) left++;
    while(right>=0 && arr[right]==0) right--;
    bool found=false;
    for(int i=left;i<=right;i++){
        if(arr[i]==0)  found = true;
    }
    if(zeros==n){
        cout<<0<<endl;
        return;
    }
    if(!found){
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
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