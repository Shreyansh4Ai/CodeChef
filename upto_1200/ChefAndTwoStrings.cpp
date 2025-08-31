#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;

        int n = S1.size();
        int minDiff = 0, maxDiff = 0;

        for (int i = 0; i < n; i++) {
            if (S1[i] == '?' || S2[i] == '?') {
                // Can match or mismatch
                maxDiff++;
            } else {
                if (S1[i] != S2[i]) {
                    minDiff++;
                    maxDiff++;
                }
            }
        }

        cout << minDiff << " " << maxDiff << "\n";
    }
    return 0;
}
