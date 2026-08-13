#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,p;
    cin>>n>>p;

    vector<pair<ll,ll>> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i].second;
    }

    for(int i=0;i<n;i++){
        cin>>arr[i].first;
    }

    sort(arr.begin(),arr.end());

    ll mincost=p;
    ll shared=1;

    for(auto it: arr){

        ll canshare = it.second;
        ll cost = it.first;

        if(cost>=p) break;

        if(shared+canshare>=n){
            mincost+=(n-shared)*cost;
            shared=n;
            break;
        }
        else{
            mincost += canshare*cost;
            shared+=canshare;
        }
    }

    mincost+=(n-shared)*p;

    cout<<mincost<<endl;
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