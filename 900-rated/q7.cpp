#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ind=1;
    ll maxlen=1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        if (arr[i]-arr[i-1]<=k)
				ind++; 
			else
				ind = 1; 
			maxlen=max(maxlen,ind);
		}
		cout << n -maxlen<< endl;
   
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