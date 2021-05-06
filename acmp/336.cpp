#include <bits/stdc++.h>
#define int long long

auto solve_a() {
    string n;
    cin >> n;
    int now = 0;
    int min_floor = 0;
    int max_floor = 0;
    for (int floor = 0; floor < n.length(); floor++){
        if (n[floor] == '1') now++;
        else now--;
        if (now < min_floor){
            min_floor = now;
        }
        if (now > max_floor){
            max_floor = now;
        }
    }
    cout << abs(min_floor) + abs(max_floor) + 1;
}
 
signed main() {
    solve_a();
    return 0;
}
