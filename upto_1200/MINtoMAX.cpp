class Solution {
public:
    int countNonMinimum(vector<int>& nums) {
        if (nums.empty()) return 0;

        int mn = *min_element(nums.begin(), nums.end());
        int count = 0;

        for (int x : nums) {
            if (x > mn) count++;
        }

        return count;
    }
};
