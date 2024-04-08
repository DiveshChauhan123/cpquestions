#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        long long minsum=0;
        for(int i=1;i<n;i++){
            minsum+=(ans[i]-ans[i-1]);
        }
        sort(ans.begin(),ans.end());
        long long sum=0;
        for(int i=1;i<n;i++){
            sum+=(ans[i]-ans[i-1]);
        }
        sum=max(sum,minsum);
        cout<<sum<<endl;
    }
}