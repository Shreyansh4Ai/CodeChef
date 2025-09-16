#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        int arr[3] = {A, B, C};
        sort(arr, arr + 3);
        cout << arr[1] << endl; // Second largest is at index 1
    }
    return 0;
}
