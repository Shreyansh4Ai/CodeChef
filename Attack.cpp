
                       // solution is not written by me for this problem 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        // Strategy 1: Only normal attacks
        int normal_only = (H + X - 1) / X;

        // Strategy 2: One special attack + normal attacks
        int remaining = max(0, H - Y);
        int special_then_normal = 1 + (remaining + X - 1) / X;

        // Output the minimum of both strategies
        cout << min(normal_only, special_then_normal) << endl;
    }
    return 0;
}
