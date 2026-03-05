#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll minsum=(k*(k+1))/2;
    ll maxsum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if(x>=minsum && x<=maxsum){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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