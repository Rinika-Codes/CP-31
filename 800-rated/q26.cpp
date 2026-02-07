#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool poss=false;
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n;j++){
            if(__gcd(arr[i],arr[j])<=2){
                poss=true;
                break;
            }
        }
    }
    if(poss) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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