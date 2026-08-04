#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cnt0++;
        else cnt1++;
    }
    int l=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(cnt1>0){
                cnt1--;
                l++;
            }else break;
        }else{
            if(cnt0>0){
                cnt0--;
                l++;
            }else break;
        }
    }
    cout<<(n-l)<<endl;
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