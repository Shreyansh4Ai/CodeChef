#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;   // number of test cases
    while (T--) {
        string S, Tword;
        cin >> S >> Tword;
        string M = "";
        for (int i = 0; i < 5; i++) {
            if (S[i] == Tword[i]) M += 'G';
            else M += 'B';
        }
        cout << M << "\n";
    }
    return 0;
}
