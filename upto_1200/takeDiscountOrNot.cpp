#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> prices(n);
        for (int i = 0; i < n; ++i) {
            cin >> prices[i];
        }

        int total_price = 0;
        int discounted_price = 0;

        for (int i = 0; i < n; ++i) {
            total_price += prices[i];
            discounted_price += max(0, prices[i] - y);  
        }

        if ((discounted_price + x) < total_price) {
            cout << "COUPON" << endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }

    return 0;
}
