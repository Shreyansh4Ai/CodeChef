#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> freq(11, 0); // index 1..10

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int maxFreq = *max_element(freq.begin(), freq.end());
        int countMax = 0, laptop = -1;

        for (int i = 1; i <= 10; i++) {
            if (freq[i] == maxFreq) {
                countMax++;
                laptop = i;
            }
        }

        if (countMax == 1)
            cout << laptop << "\n";
        else
            cout << "CONFUSED\n";
    }
    return 0;
}
