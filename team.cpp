#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1 && y==1){
            count++;
        }
        else if(x==1 && z==1){
            count++;
        }
        else if(y==1 && z==1){
            count++;
        }
    }
    cout<<count<<endl;
}