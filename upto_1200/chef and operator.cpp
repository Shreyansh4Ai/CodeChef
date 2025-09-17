#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Number of test cases

    while (T--) {
        long long A, B;  // Using long long because A and B can be large
        cin >> A >> B;

        if (A < B)
            cout << "<" << endl;
        else if (A > B)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }

    return 0;
}