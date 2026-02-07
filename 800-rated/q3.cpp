#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int max3=0;
        int curr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                cnt++;
                curr++;
                max3=max(max3,curr);
            }
            else if(s[i]=='#'){
                curr=0;
            }
        }
        if(max3>=3) cout<<2<<endl;
        else cout<<cnt<<endl;
    }
}