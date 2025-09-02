#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        // Case 1: Solve A first, then B
        int scoreA1 = 500 - 2 * X;
        int scoreB1 = 1000 - 4 * (X + Y);
        int total1 = scoreA1 + scoreB1;

        // Case 2: Solve B first, then A
        int scoreB2 = 1000 - 4 * Y;
        int scoreA2 = 500 - 2 * (X + Y);
        int total2 = scoreA2 + scoreB2;

        cout << max(total1, total2) << "\n";
    }

    return 0;
}

