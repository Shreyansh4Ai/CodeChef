#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        int rounds = log2(N);
        int total_time = rounds * A + (rounds - 1) * B;
        cout << total_time << '\n';
    }
    return 0;
}
