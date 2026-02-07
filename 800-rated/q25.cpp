#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0;
    int r=n-1;
    while(l<=r){
        if((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0')){
            l++;
            r--;
        }else{
            break;
        }
    }
    cout<<r-l+1<<endl;
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