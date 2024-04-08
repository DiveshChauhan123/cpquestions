#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        int sum=0;
        int a=2;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            sum+=ans[i];
        }
        if(sum%3==0)a=0;
        else if(sum%3==2)a=1;
        else{
            for(int i=0;i<n;i++){
                if((sum-ans[i])%3==0){
                    a=1;
                    break;
                }
            }
        }
        cout<<a<<endl;
    }
 }