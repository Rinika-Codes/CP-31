#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll start,jumps;
    cin>>start>>jumps;
    ll pos;
    if(jumps%4==1){
        pos=-jumps;
    }
    if(jumps%4==2){
        pos=1;
    }
    if(jumps%4==3){
        pos=jumps+1;
    }
    if(jumps%4==0){
        pos=0;
    }
    if(start%2==0){
        pos=start+pos;
    }else{
        pos=start-pos;
    }
    cout<<pos<<endl;
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