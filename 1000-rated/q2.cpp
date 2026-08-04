#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    int even=0;
    int gap=5;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        if(el%2==0) even++;
        if(el%k==0) gap=0;
        gap=min(gap,k-el%k);
    }
    if(k==4){
        if(even>1){
            gap=min(gap,0);
        }else if(even==1){
            gap=min(gap,1);
        }else{
            gap=min(gap,2);
        }
    }
    cout<<gap<<endl;
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