#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(ans[i]=='@')x++;
            if(i+1<n && (ans[i]=='*' && ans[i+1]=='*')){
                break;
            }
        }
        cout<<x<<endl;
    }
}