#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        vector<int> freq(26, 0);
        for (char c : S) {
            freq[c - 'a']++;
        }

        bool possible = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
