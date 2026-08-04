#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 1;
    int maxcnt = 1;
    char el=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==el){
            cnt++;
           
        }else{
            cnt=1;
            el = s[i];
        }
         maxcnt=max(maxcnt,cnt);
    }
    cout<<maxcnt+1<<endl;
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