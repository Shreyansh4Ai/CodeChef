#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int minCost = INT_MAX;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (i == j) continue;

                int cost_i = A[i];
                int cost_j = (j == i + 1) ? A[j] / 2 : A[j];
                int total = cost_i + cost_j;

                minCost = min(minCost, total);
            }
        }

        cout << minCost << endl;
    }

    return 0;
}
