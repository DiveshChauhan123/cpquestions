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
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=0;i<n;i++){
            cin>>nums[i];
            mp[ans[i]]=nums[i];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<mp[ans[i]]<<" ";
        }
    }
}