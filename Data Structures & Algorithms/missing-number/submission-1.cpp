class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumofnumber = (n*(n+1))/2;
        int sumofarr = 0;
        for(int i=0; i<n; i++){
             sumofarr += nums[i];
        }
        return sumofnumber - sumofarr;
    }
};
