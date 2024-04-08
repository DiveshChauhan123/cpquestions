#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end());
        int x=ans[(n-1)/2];
        int sum=0;
        for(int i=(n-1)/2;i<n;i++){
            if(ans[i]==x)sum++;
        }
        cout<<sum<<endl;
    }
}