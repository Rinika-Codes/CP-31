#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"Yes"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    if(n%2==1){
        if(k<=2){
            cout<<"No"<<endl;
            return;
        }else{
            cout<<"Yes"<<endl;
            cout<<(n-3)/2+1<<endl;
            for(int i=0;i<(n-3)/2;i++){
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
        return;
    }
    else{
        if(k==1){
            cout<<"No"<<endl;
            return ;
        }
        cout<<"Yes"<<endl;
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<endl;
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