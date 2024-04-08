#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>ans(n);
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        nums=ans;
        int a=0;
        sort(ans.begin(),ans.end());
        if(n%2==1){
            a=1;
        }
        int k=n/2;
        int j=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=ans[j++];
            }
            else{
                nums[i]=ans[k++];
            }
        }
        for(int i=1;i<n-1;i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
                
            }
            else if(nums[i-1]>nums[i] && nums[i]<nums[i+1]);
            else{
                a=1;
                break;
            }
        }
        if(a==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }
    }
}