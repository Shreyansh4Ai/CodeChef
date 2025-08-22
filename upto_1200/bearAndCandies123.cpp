#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int turn = 1; // turn number, 1 means Limak eats 1, 2 means Bob eats 2, etc.

        while (true) {
            if (turn % 2 == 1) { // Limak's turn (odd)
                if (A < turn) {
                    cout << "Bob\n";
                    break;
                }
                A -= turn;
            } else { // Bob's turn (even)
                if (B < turn) {
                    cout << "Limak\n";
                    break;
                }
                B -= turn;
            }
            turn++;
        }
    }
    return 0;
}
