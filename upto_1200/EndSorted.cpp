#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> P(N);
        int pos1 = -1, posN = -1;

        for (int i = 0; i < N; ++i) {
            cin >> P[i];
            if (P[i] == 1) pos1 = i;
            if (P[i] == N) posN = i;
        }

        int moves1 = pos1;
        int movesN = N - 1 - posN;
        int result = (pos1 < posN) ? (moves1 + movesN) : (moves1 + movesN - 1);
        cout << result << '\n';
    }
    return 0;
}
