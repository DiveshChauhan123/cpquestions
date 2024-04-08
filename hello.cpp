#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,ele;
    cin>>n;
    vector<int> v(1000005,0);
    for(int i=0;i<n;i++){
        cin>>ele;
        v[ele]++;
    }
    for(int i=1;i<1000005;i++){
        while(v[i]){
            cout<<i<<" ";
            v[i]--;
        }
    }
}