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
        long long NA, NB, NC, ND;
        cin >> NA >> NB >> NC >> ND;
        long long ans = max(max(NA, NB), max(NC, ND));
        cout << ans << "\n";
    }
    return 0;
}
