#include<bits/stdc++.h>
using namespace std;
bool issubstring(string x,string s){
    if(x.find(s)!=string::npos){
        return true;
    }
    return false;
}
void solve(){
    int n,k;
        cin>>n>>k;
        string x;
        string s;
        cin>>x;
        cin>>s;
        int a=0;
        if(issubstring(x,s)){
            cout<<0<<endl;
            return;
        }
        for(int i=0;i<10;i++){
            x+=x;
            a++;
            if(issubstring(x,s)){
                cout<<a<<endl;
                return;
            }
        }
        cout<<-1<<endl;
        return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}