#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<char>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                x++;
            }
        }
        if(x==k){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
            if(x<k){
            for(int i=0; i<n; i++){
                if(s[i]=='A')
                    x++;
                if(x==k){
                    cout<<i+1<<" B"<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=0; i<n; i++){
                if(s[i]=='B')
                    x--;
                if(x==k){
                    cout<<i+1<<" A"<<endl;
                    break;
                }
            }
        }
        }
    }
}