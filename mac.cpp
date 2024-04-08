#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        string s=st;
        reverse(s.begin(),s.end());
        cout<<min(st,s+st)<<endl;

    }
 }