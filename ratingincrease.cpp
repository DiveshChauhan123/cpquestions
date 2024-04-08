#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string x,y;
        int k=0;
        for(int i=0;i<s.size();i++){
            x.push_back(s[i]);
            k++;
            if(s[i+1]!='0' && i+1<s.size()){
                break;
            }
        }
        for(int i=k;i<s.size();i++){
            y.push_back(s[i]);
        }
        int b=0;
        if(!y.empty()){
            b=stoi(y);
        }
        int a=stoi(x);
        
        if(s[0]=='0'){
            cout<<-1<<endl;
        }
        else if(b>a){
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}