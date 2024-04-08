#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>ans(n);
        vector<int>nums(m);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=0;i<m;i++){
            cin>>nums[i];
        }
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i]+nums[j]<=k)a++;
            }
        }
        cout<<a<<endl;
    }
}