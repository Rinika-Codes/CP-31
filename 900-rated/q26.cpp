#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin>>n;
    while(n%2==0)
        n/=2;
    if(n>1){
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