#include<bits/stdc++.h>
using namespace std;
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
        bool a=false;
        long long b=sqrt(sum);

        if(b*b==sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}