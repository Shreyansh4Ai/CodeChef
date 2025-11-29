 #include <bits/stdc++.h>                    // ai generated solution not written by me 
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;
        int s = x + y;
        int z = 1;
        while (!isPrime(s + z)) {
            z++;
        }
        cout << z << "\n";
    }
    return 0;
}
