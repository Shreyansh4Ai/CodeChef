#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        // Step 1: Reverse directions
        for (char &c : s) {
            if (c == '<') c = '>';
            else if (c == '>') c = '<';
        }

        // Step 2: Count punished pairs
        int punished = 0;
        for (size_t i = 0; i + 1 < s.size(); ++i) {
            if (s[i] == '>' && s[i + 1] == '<') {
                ++punished;
            }
        }

        cout << punished << '\n';
    }
    return 0;
}
