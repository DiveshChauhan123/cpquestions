#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        vector<long long>nums=ans;
        sort(nums.begin(),nums.end());
        if(k>n){
            if(ans==nums){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(ans==nums){
            cout<<"YES"<<endl;
        }
        else{
            if(k==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}