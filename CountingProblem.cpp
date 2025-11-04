#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N; cin >> N;
        int odd = 0;
        for (int i = 0; i < N; ++i) {
            int x; cin >> x;
            if (x % 2) odd++;
        }
        if (odd >= 2 && odd % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
