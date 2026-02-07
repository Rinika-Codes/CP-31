#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k) cnt++;
        }
        if(cnt>0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}