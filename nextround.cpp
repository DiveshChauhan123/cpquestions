#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int n;
        cin>>n;
        ans.push_back(n);
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(ans[i]>=ans[k-1] && ans[i]>0 ){
            x++;
        }
    }
    cout<<x<<endl;

}