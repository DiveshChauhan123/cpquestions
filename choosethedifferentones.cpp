#include <bits/stdc++.h>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       int n,m,k;
       cin>>n>>m>>k;
       vector <int> kk(k,0);
       set <int> a;
       set <int> b;
       int inp;
       for(int i=0;i<n;i++){
           cin>>inp;
           if(inp<=k && inp>=0){
           a.insert(inp);
           kk[inp-1]++;
           }
       }
       for(int i=0;i<m;i++){
           cin>>inp;
            if(inp<=k && inp>=0){
           b.insert(inp);
           kk[inp-1]++;
            }
       }
       if(find(kk.begin(),kk.end(),0)==kk.end() && a.size()>=(k/2) && b.size()>=(k/2)){
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }
    return 0;
}