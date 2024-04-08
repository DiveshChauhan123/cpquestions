#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u=0,r=0,v=0,w=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x>0)u=1;
            if(x<0)v=1;
            if(y>0)r=1;
            if(y<0)w=1;
        }
        if(u+r+v+w<=3)cout<<"yes"<<endl;
        else{
            cout<<"no"<<endl;
        }
    }
}