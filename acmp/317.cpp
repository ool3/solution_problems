#include <bits/stdc++.h>

using namespace std;

int solve() {
    int x, y, z, w;
    cin >> x >> y >> z >> w;
    int counter = 0;
    for (int i = 0; i <= w / x; i++) {
        for (int j = 0; j <= w / y; j++) {
            int l = (w - x * i - y * j);
            if (l >= 0 && l % z == 0) {
                counter++;
            }
        }
    }
    printf("%d", counter);
    return 0;
}

signed main() {
    solve();
    return 0;
}
