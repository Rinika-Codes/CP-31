#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin>>n;
    int c3=0,c2=0;
    while(n>0 && n%3==0){
        c3++;
        n/=3;
    }
    while(n>0 && n%2==0){
        c2++;
        n/=2;
    }
    if(n>1 || c2>c3){
        cout<<-1<<endl;
    }else{
        cout<<c3+(c3-c2)<<endl;
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