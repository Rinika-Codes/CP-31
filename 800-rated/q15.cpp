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
    int oddcnt=0;
    for(int i=0;i<n;i++){
        if((arr[i]%2)==1) oddcnt++;
    }
    if((oddcnt%2)==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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