#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(c%2==1){
        if(a>=b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }else{
        if(a<=b){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
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