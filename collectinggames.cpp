#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> ans(n), nums, prev, curr;

        for (int i = 0; i < n; i++) {
            cin >> ans[i];
        }

        nums = ans;
        sort(ans.begin(), ans.end());

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ans[i];
            prev.push_back(sum);
        }

        for (int i = 0; i < n; i++) {
            auto it = lower_bound(ans.begin(), ans.end(), nums[i]);
            curr.push_back(it - ans.begin());
        }

        for (int i = 0; i < n; i++) {
            cout << curr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
