#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        long long x;
        long long l=INT_MIN;
        long long r=INT_MAX;
        set<long long>y;
        for(int i=0;i<n;i++){
            cin>>a>>x;
            if(a==1){
                l=max(l,x);
            }
            else if(a==2){
                r=min(r,x);
            }
            else{
                y.insert(x);
            }
        }
        long long ans=0;
        if(r<l){
            cout<<0<<endl;
        }
        else{
            ans=r-l+1;
            long long z;
            for(auto& i:y){
                if(l<=i && i<=r){
                    ans--;
                }
            }
            cout<<ans<<endl;
        }

    }
}