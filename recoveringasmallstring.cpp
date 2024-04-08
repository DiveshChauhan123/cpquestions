#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        map<char,int>mp;
        int a=97;
        for(int i=1;i<27;i++){
            mp[char(a)]==i;
        }
        for(int i=97;i<=122;i++){
            string p="";
            p+=char(i);
            int a=mp[char(i)];
            for(int j=97;j<=122;j++){
                p+=char(j);
                a+=mp[char(j)];
                for(int k=97;k<=122;k++){
                    p+=char(k);
                    a+=mp[char(k)];
                    if(a==x){
                        cout<<p<<endl;
                        break;
                    }
                    else{
                        p.pop_back();
                    }
                }
                p.pop_back();

            }
            p.pop_back();
        }
    }
}