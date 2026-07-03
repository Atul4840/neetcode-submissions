class Solution {
public:
    vector<int> dp;

    int robHelper(const vector<int>& nums, int i) {
        if (i >= nums.size()) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        int robCurrent = nums[i] + robHelper(nums, i + 2);
        int skipCurrent = robHelper(nums, i + 1);

        return dp[i] = max(robCurrent, skipCurrent);
    }

    int rob(vector<int>& nums) {
        dp.assign(nums.size(), -1);
        return robHelper(nums, 0);
    }
};