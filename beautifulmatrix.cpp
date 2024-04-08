#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>ans(5,vector<int>(5));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int y;
            cin>>y;
            ans[i][j]=y;
        }
    }
    int x,y;
    int z=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(ans[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    while(x!=2){
        if(x>2){
            x--;
            z++;
        }
        if(x<2){
            x++;
            z++;
        }
    }
    while(y!=2){
        if(y>2){
            y--;
            z++;
        }
        if(y<2){
            y++;
            z++;
        }
    }
    cout<<z<<endl;
}