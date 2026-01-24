#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

unordered_map<int64, int64> memo;

int64 solve(int64 n) {
    if (n < 2) return n;

    if (auto it = memo.find(n); it != memo.end())
        return it->second;

    auto best = max(
        n,
        solve(n / 2) + solve(n / 3) + solve(n / 4)
    );

    memo[n] = best;
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64 n;
    while (cin >> n) {
        cout << solve(n) << '\n';
    }
    return 0;
}
