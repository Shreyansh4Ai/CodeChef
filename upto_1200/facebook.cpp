#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;

        int A[N], B[N];
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];

        int bestIndex = 0;
        for (int i = 1; i < N; ++i) {
            if (A[i] > A[bestIndex] || 
               (A[i] == A[bestIndex] && B[i] > B[bestIndex])) {
                bestIndex = i;
            }
        }

        cout << bestIndex + 1 << endl;  // Convert to 1-based index
    }

    return 0;
}
