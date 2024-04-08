#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        int a1 = a[0];
        int a2 = a[1];
        int a3 = a[n-2];
        int a4 = a[n-1];
 
        int a5 = a1-a3;
        int a6 = a1-a4;
        int a7 = a2-a3;
        int a8 = a2-a4;
 
        int b1 = abs(a5);
        int b2 = abs(a6);
        int b3 = abs(a7);
        int b4 = abs(a8);
 
        int sum = b1 +b2 +b3 +b4;
 
        cout<<sum<<endl;
    }
 }