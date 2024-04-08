#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int a=INT_MIN;
        int x=0;
        for(int i=0;i<n;i++){
            a=max(a,ans[i]-x);
            x=ans[i];
        }
        a=max(a,2*(k-ans[n-1]));
        cout<<a<<endl;
    }
}