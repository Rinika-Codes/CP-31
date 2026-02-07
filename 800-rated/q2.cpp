#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr;
        arr.push_back(0);
        for(int i=0;i<n;i++){
            int point;
            cin>>point;
            arr.push_back(point);
        }
        arr.push_back(x);
        int maxdist=INT_MIN;
        int s=arr.size();
        for(int i=1;i<s;i++){
            if(i==s-1){
                maxdist=max(maxdist,2*(arr[i]-arr[i-1]));
            }else{
                maxdist=max(maxdist,(arr[i]-arr[i-1]));
            }
        }
        cout<<maxdist<<endl;
    }
}