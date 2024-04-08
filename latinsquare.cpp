#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a=0;
        int b=0;
        vector<vector<char>>ans(3,vector<char>(3));
        for(int i=0;i<=2;i++){
            for(int j=0;j<=2;j++){
                cin>>ans[i][j];
                if(ans[i][j]=='?'){
                    a=i;
                    b=j;
                }
            }
        }
        int k=0;
        vector<char>nums{'A','B','C'};
        while(k<=2){
            if(ans[a][k]=='A'){
                nums[0]='0';
                k++;
            }
            else if(ans[a][k]=='B'){
                nums[1]='0';
                k++;
            }
            else if(ans[a][k]=='C'){
                nums[2]='0';
                k++;
            }
            else{
                k++;
            }
        }
        for(int i=0;i<=2;i++){
            if(nums[i]!='0'){
                cout<<nums[i]<<endl;
            }
        }
    }
}