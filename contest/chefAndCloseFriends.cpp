#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;

        int L = max(x - y, x - z);
        int R = min(x + y, x + z);

        int ans = 0;
        for (int p = L; p <= R; p++)
            if (p != x) ans++;

        cout << ans << '\n';
    }
}
