#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                c=0;
            }
            else{
                c++;
                if(c==3){
                    flag=true;
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                ans++;
            }
        }
        if(flag)cout<<2<<endl;
        else{
            cout<<ans<<endl;
        }
    }
}