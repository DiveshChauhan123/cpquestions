#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l,c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Check for division by zero
    if (k == 0 || l == 0 || p == 0 || nl == 0 || np == 0|| c==0) {
        cout << "Cannot divide by zero" << endl;
        return 1; // Exit with error code 1
    }

    // Calculate maximum number of cakes
    int x = (k * l) / nl;
    int y = p / np;
    int z = c * d;
    int a = min(min(x, y), z) / n;

    cout << a << endl;
    return 0; // Exit normally
}