#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    int lr = r/(b+1);
    int extra = r%(b+1);
    string s;
    for(int i=1;i<=(b+1);i++){
        for(int j=0;j<lr;j++){
            s+='R';
        }
        if(extra>0){
            s+='R';
            extra--;
        }
        if(i!=(b+1)){
            s+='B';
        }
    }
    cout<<s<<endl;
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