#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;

        int smallValue = 100 * B;
        int largeValue = 225 * A;

        if (smallValue > largeValue)
            cout << "Small\n";
        else if (smallValue < largeValue)
            cout << "Large\n";
        else
            cout << "Equal\n";
    }
    return 0;
}
