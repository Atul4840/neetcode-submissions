class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProduct = nums[0];
        int minProduct = nums[0];
        int answer = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            // If current number is negative,
            // maximum becomes minimum and vice versa.
            if (nums[i] < 0)
                swap(maxProduct, minProduct);

            maxProduct = max(nums[i], maxProduct * nums[i]);
            minProduct = min(nums[i], minProduct * nums[i]);

            answer = max(answer, maxProduct);
        }

        return answer;
    }
};