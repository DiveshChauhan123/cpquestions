#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans="";
        int a=1;
        unordered_map<int,char>mp;
        for(int i=97;i<=122;i++){
            mp[a]=char(i);
            a++;
        }
        for(int i=1;i<=26;i++){
            ans+=mp[i];
            for(int j=1;j<=26;j++){
                ans+=mp[j];
                for(int k=1;k<=26;k++){
                    if(i+j+k==n){
                        ans+=mp[k];
                        break;
                    }
                }
                if(ans.size()==3)break;
                ans.pop_back();
            }
            if(ans.size()==3)break;
            ans.pop_back();
        }
        cout<<ans<<endl;
    }
}