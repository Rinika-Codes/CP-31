#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){  
        int n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n-1;i++){
            ll el;
            cin>>el;
            sum+=el;
        }
        cout<<0-sum<<endl;
    }
}