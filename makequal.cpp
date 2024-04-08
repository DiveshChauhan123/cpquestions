#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,inp;
    cin>>n;
    vector<int> v;
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>inp;
        v.push_back(inp);
        sum+=inp;
    }
 
    if(n==1) {cout<<"YES"<<endl;continue;}
 
    long long c=sum/n;
    long long y=0;
    int f=0;
 
    for(int i=0;i<n;i++){
        y+=v[i]-c;
        if(y<0) {cout<<"NO"<<endl;f=1;break;}
    }
 
    if(!f) cout<<"YES"<<endl;
}
}