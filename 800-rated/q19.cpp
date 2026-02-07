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
    int cnt1=0;
    int cnt_1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)cnt1++;
        else cnt_1++;
    }
    int ans=0;
    while(cnt1<cnt_1 || cnt_1%2==1){
        ans++;
        cnt1++;
        cnt_1--;
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