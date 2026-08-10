#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    ll gcd = a-b;
    ll moves=min(b%gcd,gcd-(b%gcd));
    cout<<gcd<<" "<<moves<<endl;
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