#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long product=1;
        vector<long long>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
            product=product*ans[i];
        }
        if(product<0){
            cout<<0<<endl;
        }
        else if(product==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
        }
    }
}