#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        vector<int>ans(n);
        long long zero=0;
        long long one=0;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]==0){
                zero++;
            }
            else{
                one++;
            }
        }
        ans=nums;
        long long a=0;
        long long b=0;
        long long c=0;
        long long ibt=0;
        for(int i=0;i<n;i++){
            if(ans[i]==1){
                ibt++;
            }
            else{
                a=a+ibt;
            }
        }
        long long x=0;;
    
    for(int i=n-1;i>=0;i--){
        if(ans[i]==1){
            ans[i]=0;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]==1){
            x++;
        }
        else{
            b=b+x;
        }
    }
    x=0;
    ans=nums;
    for(int i=0;i<n;i++){
        if(ans[i]==0){
            ans[i]=1;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]==1){
            x++;
        }
        else{
            c=c+x;
        }
    }
    
        
        a=max(b,a);
        a=max(c,a);
        if(one==0){
            cout<<n-1<<endl;
        }
        else if(zero==0){
            cout<<n-1<<endl;
        }
        else {
            cout<<a<<endl;
        }
        
    }
}