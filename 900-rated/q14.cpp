#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin>>n;
    if(n<4 || n%2!=0){
        cout<<-1<<endl;
        return;
    }
    ll maxi = n/4;
    ll mini = (n%6==0)? n/6: n/6+1;
    cout<<mini<<" "<<maxi<<endl;
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