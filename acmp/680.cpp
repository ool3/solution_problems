#include <bits/stdc++.h>

using namespace std;
#define int long long

int solve() {
    int n;
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 3;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] * 2;
    }
    cout << dp[n];
    return 0;
}

signed main() {
    solve();
    return 0;
}
