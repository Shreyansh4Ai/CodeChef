#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long store = 0; // protein storage
        bool failed = false;

        for (int i = 0; i < N; i++) {
            store += A[i];   // buy protein today
            if (store < K) { // not enough for dinner
                cout << "NO " << (i + 1) << "\n";
                failed = true;
                break;
            }
            store -= K; // eat K grams
        }

        if (!failed) {
            cout << "YES\n";
        }
    }

    return 0;
}
