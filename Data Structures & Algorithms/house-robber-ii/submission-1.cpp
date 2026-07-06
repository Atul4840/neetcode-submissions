class Solution {
public:
     int help(vector<int>& nums, int start, int stop){
            int robbedmoneybefore2ago = 0;
            int robbedmoneyfromprev   = 0;
            for(int i=start; i<=stop; i++){
                // skip

                // rob
                int totalnewrobbedmoney = max(robbedmoneybefore2ago + nums[i], robbedmoneyfromprev);

                robbedmoneybefore2ago = robbedmoneyfromprev;
                robbedmoneyfromprev = totalnewrobbedmoney;

            }
            return robbedmoneyfromprev;
            
     }
    int rob(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return nums[0];
        }
        // skip first 
          int res1 = help(nums, 1, nums.size()-1);
        // skip last 
            int res2 = help(nums, 0, nums.size()-2);
        // count max
        return max(res1, res2);
    }
};
