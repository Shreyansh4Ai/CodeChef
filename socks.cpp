#include <iostream>
using namespace std;

int main() {
    int A, X, Y;
    cin >> A >> X >> Y;

    if (X + Y >= A)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
