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
    if((arr[0]!=arr[1]) || (arr[n-1]!=arr[n-2])) {
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if((arr[i]!=arr[i-1]) && (arr[i]!=arr[i+1])){
            cout<<-1<<endl;
            return;
        }
    }
    vector<ll>ans(n);
    for(int i=0;i<n;i++){
        ans[i]=i+1;
    }
    ll l=0,r=0;
    while(r<n){
        if(arr[l]==arr[r]){
            r++;
        }else{
            rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
			l = r;
        }
    }
    rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
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