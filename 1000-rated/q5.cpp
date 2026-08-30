#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,int>>arr(n);
    for(int i=0;i<n;i++){
        int el ;
        cin>>el;
        el%=k;
        if(el==0){
            arr[i].first = k;
        }else arr[i].first = el;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end(),[](const auto& a, const auto& b){
        if(a.first!=b.first)
        return a.first>b.first;
        return a.second<b.second;
    });
    for (auto &p : arr) {
        cout << p.second + 1 << " ";
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