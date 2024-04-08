#include<bits/stdc++.h>
using namespace std;
int main(){
    string ans;
    cin>>ans;
    for(int i=0;i<ans.size();i++){
        int digit=ans[i]-'0';
        if(digit>4){
            if(i==0 && digit==9)continue;
            digit=9-digit;
            ans[i]=digit+'0';
        }
    }
    cout<<ans<<endl;
}