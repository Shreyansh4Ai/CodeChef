#include <bits/stdc++.h>
using namespace std;

int main() {
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;

    map<int, int> freq;
    int x;

    for (int i = 0; i < N1 + N2 + N3; i++) {
        cin >> x;
        freq[x]++;
    }

    vector<int> result;
    for (auto &p : freq) {
        if (p.second >= 2) result.push_back(p.first);
    }

    cout << result.size() << "\n";
    for (int id : result) cout << id << "\n";
}
                                                                  /// solved using chatGPT ///
