#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long N, X, Y;
        cin >> N >> X >> Y;

        // Horizontal + vertical attacks (excluding the queen's own cell)
        long long hv = 2 * N - 2;

        // Diagonal directions:
        // up-left:      decrease row, decrease col
        long long ul = min(X - 1, Y - 1);
        // up-right:     decrease row, increase col
        long long ur = min(X - 1, N - Y);
        // down-left:    increase row, decrease col
        long long dl = min(N - X, Y - 1);
        // down-right:   increase row, increase col
        long long dr = min(N - X, N - Y);

        long long ans = hv + ul + ur + dl + dr;
        cout << ans << "\n";
    }
    return 0;
}
