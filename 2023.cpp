#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int rem=2023;
        int possible=1;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
            possible=possible&(rem%b[i]==0);
            rem=rem/b[i];
        }
        if(!possible){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<rem<<" ";
            for(int i=1;i<k;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
}