#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
   int n;
   cin>>n;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
   ll maxel=*max_element(arr.begin(),arr.end());
   vector<ll>brr;
   vector<ll>crr;
   for(int i=0;i<n;i++){
    if(arr[i]!=maxel) brr.push_back(arr[i]);
    else crr.push_back(arr[i]);
   }
   if(brr.size()==0){cout<<-1<<endl; return;}

    cout<<brr.size()<<" "<<crr.size();
    cout<<endl;
    for(auto it:brr){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:crr){
        cout<<it<<" ";
    }
    cout<<endl;
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