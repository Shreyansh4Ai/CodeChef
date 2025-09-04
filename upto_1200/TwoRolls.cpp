#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int need = 50 - X;
        int lo = 2 * Y;
        int hi = 2 * Y + 10;
        cout << (lo <= need && need <= hi ? "Yes" : "No") << '\n';
    }
    return 0;
}
