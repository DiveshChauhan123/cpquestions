#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(k>=n-1)ans=1;
        else{
            ans=n;
        }
        cout<<ans<<endl;
    }
}