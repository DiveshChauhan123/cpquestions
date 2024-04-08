#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll n, f, a, b;
    cin >> n >> f >> a >> b;

    vector<ll> m(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> m[i + 1];
    }

    for (int i = 1; i <= n; i++) {
        ll mn = min((m[i] - m[i - 1]) * a, b);
        if (f - mn <= 0) {
            cout << "NO\n";
            return;
        }
        f -= mn;
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}