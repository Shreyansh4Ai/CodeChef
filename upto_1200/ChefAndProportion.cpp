#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isProportion(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    do {
        int x = nums[0], y = nums[1], z = nums[2], w = nums[3];
        if (x * w == y * z) return true;
    } while (next_permutation(nums.begin(), nums.end()));
    return false;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> nums = {a, b, c, d};
    cout << (isProportion(nums) ? "Possible" : "Impossible") << endl;
    return 0;
}
