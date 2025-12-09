#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N;
        long long M;
        cin >> N >> M;
        long long ans = 0;
        for (int i = 0; i < N; ++i) {
            long long a;
            cin >> a;
            // For each position, pick B_i = 1 or M to maximize |a - B_i|
            long long best = max(a - 1, M - a);
            ans += best;
        }
        cout << ans << '\n';
    }
    return 0;
}
