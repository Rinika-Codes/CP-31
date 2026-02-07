#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long>copy=arr;
        sort(copy.begin(),copy.end());
        if(arr==copy || k>1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}