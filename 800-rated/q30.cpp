#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool check(int n){
    int zero=0;
    int dig=0;
    while(n>0){
        if((n%10)==0) zero++;
        dig++;
        n/=10;
    }
    return dig==zero+1;
}

void func(vector<int>&round){
    for(int i=1;i<=999999;i++){
        if(check(i)) round.push_back(i);
    }
}

void solve(vector<int>&round){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<round.size();i++){
        if(round[i]<=n) ans++;
        else break;
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>round;
    func(round);
    int t;
    cin>>t;
    while(t--){
        solve(round);
    }
}