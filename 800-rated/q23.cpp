#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    ll ymoves=d-b;
    ll xmoves=d-b;
    a+=xmoves;
    if(c>a){
        cout<<-1<<endl;
        return;
    }
    xmoves+=(a-c);
    cout<<xmoves<<endl;
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