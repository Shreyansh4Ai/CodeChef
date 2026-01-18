#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long A, B, C;
        cin >> A >> B >> C;

        long long S = A + B + C;

        if (S % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        long long half = S / 2;

        if (A == half || B == half || C == half ||
            A + B == half || A + C == half || B + C == half) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
