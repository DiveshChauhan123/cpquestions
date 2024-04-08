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
        int flag=0;
        for(int i=0;i<n;i++){
            if(ans[i]==k){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}