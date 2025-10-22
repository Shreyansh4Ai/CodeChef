#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int seven = 0, sodd = 0;
        for (int i = X; i <= Y; ++i) {
            if (i % X == 0) {
                if (i % 2 == 0)
                    seven += i;
                else
                    sodd += i;
            }
        }
        if (seven >= sodd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
