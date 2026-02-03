#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        int total = N * M;

        // If Bob wants nothing, Alice keeps everything
        if (K == 0) {
            cout << total << "\n";
            continue;
        }

        int best = INT_MAX;

        // Vertical cuts
        for (int x = 1; x < M; x++) {
            int a = N * x;
            int b = N * (M - x);
            if (a >= K) best = min(best, a);
            if (b >= K) best = min(best, b);
        }

        // Horizontal cuts
        for (int y = 1; y < N; y++) {
            int a = M * y;
            int b = M * (N - y);
            if (a >= K) best = min(best, a);
            if (b >= K) best = min(best, b);
        }

        // If no valid cut satisfies Bob, Alice gives the whole bar
        if (best == INT_MAX) {
            cout << 0 << "\n";
        } else {
            cout << total - best << "\n";
        }
    }

    return 0;
}

