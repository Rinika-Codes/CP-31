#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll newa = (2*b-c);
    ll newb = (a+c)/2;
    ll newc = (2*b-a);
    bool ans=false;
    if(newa/a>0 && newa%a==0){
        ans=true;
    }
    if(newb/b>0 && newb%b==0 && (a+c)%2==0){
        ans=true;
    }
    if(newc/c>0 && newc%c==0){
        ans=true;
    }
    if(ans){
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