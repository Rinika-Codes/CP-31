#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        map<long long,long long>mpp;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        if(mpp.size()>2) cout<<"no"<<endl;
        else{
            long long freq_1 = mpp.begin()->second;
            long long freq_2 = mpp.rbegin()->second;
            if(abs(freq_1-freq_2)<=1) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }

    }
}