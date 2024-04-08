#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
    string f="";
    for(int i=n-1;i>=0;i--){
        if(s[i]=='a' || s[i]=='e'){
            f+=s[i];
            f+=s[i-1];
            f+=".";
            i--;
        }
        else{
            f+=s[i];
            f+=s[i-1];
            f+=s[i-2];
            f+=".";
            i-=2;
        }
    }
    reverse(f.begin(),f.end());
    for(int i=1;i<f.size();i++){
        cout<<f[i];
    }
    cout<<"\n";
    }
}