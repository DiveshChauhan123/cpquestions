#include "bits/stdc++.h"
#define int long long 
 
using namespace std;
 
int T;
 
int a[211], n;
 
int dist(pair<int, int> p1, pair<int, int> p2)
    {
        return abs(p1.first - p2.first) + abs(p1.second - p2.second);
    }
 
void solve()
    {
        cin >> n;
        for(int i = 1; i <= 2 * n; i++) { cin >> a[i]; }
    
        sort(a + 1, a + 2 * n + 1);
 
        vector<pair<int, int>> pt;
        int L = 1, R = 2 * n;
        while (L <= R)
            {
                pt.push_back({a[L], a[R]});
                L++;
                R--;
            }
        
        int res = 0;
        for(int i = 1; i < pt.size(); i++) { res += dist(pt[i], pt[i-1]); }
 
        cout << res << '\n';
        for(pair<int, int> i : pt) { cout << i.first << " " << i.second << '\n'; }
    }
 
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    cin >> T;
 
    while (T--) { solve(); }
 
    return 0;
}