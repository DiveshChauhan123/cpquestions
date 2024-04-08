#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        unordered_map<char,int>mp;
        int a=64;
        for(int i=65;i<91;i++){
            mp[char(i)]=0;
        }
        for(int i=0;i<n;i++){
            char c=s[i];
            if(mp[c]<(int(c)-64)){
                mp[c]++;
            }
        }
        int c=0;
        if(mp['A']==1){
            c++;
        }
        if(mp['B']==2){
            c++;
        }
        if(mp['C']==3){
            c++;
        }
        if(mp['D']==4){
            c++;
        }
        if(mp['E']==5){
            c++;
        }
        if(mp['F']==6){
            c++;
        }
        if(mp['G']==7){
            c++;
        }
        if(mp['H']==8){
            c++;
        }
        if(mp['I']==9){
            c++;
        }
        if(mp['J']==10){
            c++;
        }
        if(mp['K']==11){
            c++;
        }
        if(mp['L']==12){
            c++;
        }
        if(mp['M']==13){
            c++;
        }
        if(mp['N']==14){
            c++;
        }
        if(mp['O']==15){
            c++;
        }
        if(mp['P']==16){
            c++;
        }
        if(mp['Q']==17){
            c++;
        }
        if(mp['R']==18){
            c++;
        }
        if(mp['S']==19){
            c++;
        }
        if(mp['T']==20){
            c++;
        }
        if(mp['U']==21){
            c++;
        }
        if(mp['V']==22){
            c++;
        }
        if(mp['W']==23){
            c++;
        }
        if(mp['X']==24){
            c++;
        }
        if(mp['Y']==25){
            c++;
        }
        if(mp['Z']==26){
            c++;
        }
        cout<<c<<endl;
        
    }
}