#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int start38 = 0, ltime108 = 0;
        for (int i = 0; i < N; ++i) {
            string code;
            cin >> code;
            if (code == "START38") start38++;
            else if (code == "LTIME108") ltime108++;
        }
        cout << start38 << " " << ltime108 << endl;
    }
    return 0;
}
