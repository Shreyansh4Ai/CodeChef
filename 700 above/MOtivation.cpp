#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int max_r = 0;  // Initialize max_r to 0

        for(int i = 0; i < n; i++){
            int s, r;
            cin >> s >> r;
            if(s <= x){
                max_r = max(max_r, r);  // Update max_r directly
            }
        }
        cout << max_r << endl;
    }
    return 0;
}
