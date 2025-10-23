#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A[3], B[3];
        for (int i = 0; i < 3; ++i) cin >> A[i];
        for (int i = 0; i < 3; ++i) cin >> B[i];

        sort(A, A + 3, greater<int>());
        sort(B, B + 3, greater<int>());

        int alice_score = A[0] + A[1];
        int bob_score = B[0] + B[1];

        if (alice_score > bob_score)
            cout << "Alice\n";
        else if (bob_score > alice_score)
            cout << "Bob\n";
        else
            cout << "Tie\n";
    }
    return 0;
}
