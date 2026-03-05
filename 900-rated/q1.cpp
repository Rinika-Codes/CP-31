#include<bits/stdc++.h>
#define ll long long

using namespace std;

int dx[4]={-1,+1,-1,+1};
int dy[4]={-1,-1,+1,+1};

void solve(){
    ll a,b;
    cin>>a>>b;
    ll xk,yk,xq,yq;
    cin>>xk>>yk;
    cin>>xq>>yq;
    set<pair<ll,ll>>king;
    set<pair<ll,ll>>queen;
    for(int i=0;i<4;i++){
        king.insert({xk+dx[i]*a,yk+dy[i]*b});
        king.insert({xk+dx[i]*b,yk+dy[i]*a});
        queen.insert({xq+dx[i]*a,yq+dy[i]*b});
        queen.insert({xq+dx[i]*b,yq+dy[i]*a});
    }
    ll ans=0;
    for(auto it:king){
        if(queen.find(it)!=queen.end()) ans++;
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