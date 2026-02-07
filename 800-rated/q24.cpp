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
    int arrxor=0;
    for(int i=0;i<n;i++){
        arrxor=arrxor^arr[i];
    }
    if(n%2==1){
        cout<<arrxor<<endl;
    }else{
        if(arrxor==0){
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
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