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
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(ans[i]);
        }
        cout<<sum<<endl;
    }
}