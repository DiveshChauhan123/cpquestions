#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(x>y){
            cout<<x<<endl;
        }
        else if(x==y){
            cout<<x<<endl;
        }
        else{
            int a=x;
            for(int i=0;i<k;i++){
                x++;
                a++;
                if(x==y){
                    break;
                }
            }
            a=a+abs(y-x)*2;
            cout<<a<<endl;
        }
    }
}