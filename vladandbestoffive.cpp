#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        // for(int i=0;i<5;i++){
        //     cin>>s[i];
        // }
        cin>>s;
        int a=0;
        int b=0;
        for(int i=0;i<5;i++){
            if(s[i] =='A'){
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
        }
        if(a>b){
            cout<<"A"<<endl;
        }
        else {
            cout<<"B"<<endl;
        }
    }
}