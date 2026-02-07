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
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==2) cnt2++;
    }
    if(cnt2%2==1){
        cout<<-1<<endl;
        return;
    }
    cnt2/=2;
    int k;
    for(int i=0;i<n;i++){
        if(arr[i]==2) cnt2--;
        if(cnt2==0){
            k=i+1;
            break;
        } 
    }
    cout<<k<<endl;
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