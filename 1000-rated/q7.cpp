#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;

    vector<ll> arr(n);
    vector<ll> brr(n);

    for(ll i = 0; i < n; i++) cin >> arr[i];
    for(ll i = 0; i < n; i++) cin >> brr[i];

    vector<ll> long_a(2*n + 1, 0);
    vector<ll> long_b(2*n + 1, 0);


    ll cnt = 1;

    for(ll i = 1; i < n; i++){
        if(arr[i-1] == arr[i]){
            cnt++;
        }
        else{
            long_a[arr[i-1]] = max(long_a[arr[i-1]], cnt);
            cnt = 1;
        }
    }

    long_a[arr[n-1]] = max(long_a[arr[n-1]], cnt);

  
    cnt = 1;

    for(ll i = 1; i < n; i++){
        if(brr[i-1] == brr[i]){
            cnt++;
        }
        else{
            long_b[brr[i-1]] = max(long_b[brr[i-1]], cnt);
            cnt = 1;
        }
    }

    long_b[brr[n-1]] = max(long_b[brr[n-1]], cnt);

   
    ll ans = 1;

    for(ll i = 1; i <= 2*n; i++){
        ans = max(ans, long_a[i] + long_b[i]);
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}