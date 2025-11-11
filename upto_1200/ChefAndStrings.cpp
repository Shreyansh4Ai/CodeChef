#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> S(N);
        for (int i = 0; i < N; ++i) {
            cin >> S[i];
        }

        long long total_skips = 0;
        for (int i = 0; i < N - 1; ++i) {
            total_skips += abs(S[i + 1] - S[i]) - 1;
        }

        cout << total_skips << endl;
    }
    return 0;
}
