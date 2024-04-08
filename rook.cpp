#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=s[0];
        int b=s[1]-'0';
        int x=b;
        int y=b;
        for(int i=1;i<b;i++){
            x--;
            cout<<char(a)<<x<<endl;
        }
        for(int i=0;i<8-b;i++){
            y++;
            cout<<char(a)<<y<<endl;
        }
        for(int i=0;i<a-97;i++){
            char c=97+i;
            cout<<c<<b<<endl;
        }
        for(int i=a-97+1;i<8;i++){
            char c=97+i;
            cout<<c<<b<<endl;
        }
    }
}