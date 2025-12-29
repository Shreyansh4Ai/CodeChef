#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        long long P;
        cin >> N >> P;

        long long cakewalk_threshold = P / 2;
        long long hard_threshold = P / 10;

        int cakewalk = 0, hard = 0;

        for (int i = 0; i < N; i++) {
            long long solved;
            cin >> solved;

            if (solved >= cakewalk_threshold)
                cakewalk++;

            if (solved <= hard_threshold)
                hard++;
        }

        if (cakewalk == 1 && hard == 2)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
