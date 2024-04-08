#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans(n);
        int a=1;
        for(int i=0;i<k;i++){
            ans[i]=a++;
        }
        a=n;
        for(int i=k;i<n;i++){
            ans[i]=a--;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}