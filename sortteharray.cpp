#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>ans;
    unordered_map<long long,long long>mp;
    for(long long i=0;i<100001;i++){
        mp[i]=0;
    }
    for(long long i=0;i<1000001;i++){
        cin>>ans[i];
        mp[ans[i]]++;
    }
    for(long long i=0;i<100001;i++){
        while(mp[i]>0){
            cout<<i<<" ";
            mp[i]--;
        }
    }
}