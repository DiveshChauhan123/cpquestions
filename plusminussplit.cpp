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
        int a=0;
        for(int i=0;i<n;i++){
            if(s[i]=='+'){
                a++;
            }
            else{
                a--;
            }
        }
        cout<<abs(a)<<endl;
    }
}