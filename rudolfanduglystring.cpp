#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin >> n;
    string s;
    cin >> s;
 
    string s1 = "map";
    string s2 = "pie";
    string s3 = "mapie";
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
 
    // Count occurrences of s1,s2 and s3 in the string s
    for (int pos = 0; pos < s.size(); ) {
        if (s.substr(pos, s1.size()) == s1) {
            cnt1++;
            pos += s1.size();
        } else if (s.substr(pos, s2.size()) == s2) {
            cnt2++;
            pos += s2.size();
        } else if (s.substr(pos, s3.size()) == s3) {
            cnt3++;
            pos += s3.size();
        } else {
            pos++;
        }
    }
 
    // Calculate the total count of occurrences
    int ans = cnt1 + cnt2 - cnt3;
    cout << ans << endl;
        
    }
}