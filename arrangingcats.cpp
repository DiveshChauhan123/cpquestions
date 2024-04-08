#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans;
        string nums;
        cin>>ans;
        cin>>nums;
        int a=0;
        int b=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='1' && nums[i]=='0'){
                a++;
            }
            else if(ans[i]=='0' && nums[i]=='1'){
                b++;
            }
        }
        cout<<max(a,b)<<endl;
    }
}