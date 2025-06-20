#include <bits/stdc++.h>
using namespace std;

void solve() { // Missing parentheses for function definition
    int x, y;
    cin >> x >> y;
    
    if (__gcd(x, y) > 1) { // Use __gcd instead of just gcd if you're using <bits/stdc++.h>
        cout << "0" << endl; // Common divisor exists
    } else if (__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1) { 
        // Try making one number even to check for a common divisor
        cout << "1" << endl;
    } else {
        // If neither helps, both need to be incremented
        cout << "2" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
