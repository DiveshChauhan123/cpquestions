#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        vector<long long>ans;
        string s="";
        int l;
        cin>>l;
        for(int i=0;i<l;i++){
            int x;
            cin>>x;
            ans.push_back(x);
        }
        vector<long long>ch(26,0);
        for(int i=0;i<l;i++){
            for(int j=0;j<26;j++){
                if(ans[i]==ch[j]){
                    s.push_back(char(j+97));
                    ch[j]++;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
}