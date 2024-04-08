#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int a=1;
        bool b=true;
        nums=ans;
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            if(ans[i]!=i+1){
                b=false;
            }
        }
        if(!b){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                    swap(nums[i],nums[i+1]);
                }
            }
            if(ans[0]==nums[0]){
                cout<<"YES"<<endl;
                
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}