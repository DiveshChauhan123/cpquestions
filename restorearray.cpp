#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        vector<long long> a(n);
        a[0] = b[0];
        a[n - 1] = b[b.size() - 2];
        for (int i = 1; i < n - 1; i++) {
            a[i] = min(b[i - 1], b[i]);
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}