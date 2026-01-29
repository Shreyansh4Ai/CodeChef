#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    // Sort the array
    sort(a.begin(), a.end());

    vector<int> result(n);
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; ++i) {
      if (i % 2 == 0) {
        result[i] = a[left++];
      } else {
        result[i] = a[right--];
      }
    }

    for (int i = 0; i < n; ++i) {
      cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
  }

  return 0;
}
