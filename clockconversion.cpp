#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;cin>>t;
   int hours,mins; char c; string s;
   while(t--){
     cin>>hours>>c>>mins;
     if(hours<12){s="AM";}
     else{s="PM";}
     if(hours==0){
        hours=12;
     }
     else if(hours>12){
        hours-=12;
     }
     if(hours<10){
        cout<<0;
     }
     cout<<hours<<c;
     if(mins<10){
        cout<<0;
     }
     cout<<mins<<' '<<s<<endl;
    }
    return 0;
}