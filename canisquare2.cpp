#include<bits/stdc++.h>
using namespace std;
int square(int sum){
    long long s=1;
    long long e=sum;
    while(s<=e){
        long long mid=s+(e-s)/2;
        if(mid*mid==sum){
            return mid;
        }
        else if(mid*mid>sum){
            e=mid;
        }
        else{
            s=mid;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>ans(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            sum=sum+ans[i];
        }
        int a=0;
        int c=square(sum);
        
        if(c!=-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}