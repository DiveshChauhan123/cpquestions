#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>ans(n);
        int product=1;
        int zero=0;
        int negative=0;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            if(ans[i]==0){
                zero++;
            }
            if(ans[i]<0){
                negative++;
            }
        }
        int idx=0;
        if(zero!=0 || negative%2!=0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            for(int i=0;i<n;i++){
                if(ans[i]<0)idx=i;
            }
            cout<<1<<" "<<0<<endl;
        }
    }
}