#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int consumed = Y * Z;          // total calories eaten
    int remaining = X - consumed;  // calories left

    if (remaining < 0) 
        cout << -1 << "\n";        // exceeded limit
    else 
        cout << remaining << "\n"; // still can eat
    return 0;
}
