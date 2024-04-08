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
        int zeros=0;
        int ones=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zeros++;
            }
            else{
                ones++;
            }
        }
        if(zeros==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}