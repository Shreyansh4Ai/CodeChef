
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        int degree = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (A[i] != 0) {
                degree = i;
                break;
            }
        }
        cout << degree << "\n";
    }
    return 0;
}
