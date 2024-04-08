#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        cin>>a>>b;
        int c,d,e,f;
        if ((a % 2 == 0 && 2 * b != a) || (b % 2 == 0 && 2 * a != b)) {
             cout << "YES" << "\n";
          }
        else{
            cout<<"NO"<<endl;
        }
    }
}