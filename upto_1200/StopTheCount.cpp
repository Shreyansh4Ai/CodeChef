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
        string S;
        cin >> S;

        int ones = 0, ways = 0;
        for (int i = 1; i <= N; i++) {
            if (S[i - 1] == '1') {
                ones++;
            }
            if (2 * ones > i) {
                ways++;
            }
        }
        cout << ways << "\n";
    }
    return 0;
}
