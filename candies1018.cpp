#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(2 * N);
        unordered_map<long long, int> freq;

        for (int i = 0; i < 2 * N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }

        bool ok = true;
        for (auto &p : freq) {
            if (p.second > 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}
