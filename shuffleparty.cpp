#include<bits/stdc++.h>
using namespace std;
int hcf(long long a){
    long long z=1;
    for(int i=1;i<a;i++){
        if(a%i==0)z=i;
    }
    return z;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>ans;
        long long x=1;
        for(long long i=0;i<n;i++){
            ans[i]=x;
            x++;
        }
        for(long long i=1;i<n;i++){
            long long y=hcf(ans[i])-1;
            swap(ans[y],ans[i]);
        }
        for(long long i=0;i<n;i++){
            if(ans[i]==1){
                x=i+1;
            }
        }
        cout<<x<<endl;
    }
}