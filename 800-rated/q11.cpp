#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        ans=min(ans,abs(arr[i]));
    }
    cout<<ans<<endl;
}