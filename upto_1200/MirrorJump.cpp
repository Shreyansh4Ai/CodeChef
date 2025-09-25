#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        if (K == N) {
            cout << 0 << endl;
        } else {
            int direct = N - K;
            int mirror = 1 + abs(K - 1); // Mirror to N+1-K, then move to N
            cout << min(direct, mirror) << endl;
        }
    }
    return 0;
}
