class Solution {
    public boolean hasDuplicate(int[] nums) {
         if(nums.length== 0)
         {
            return false;
         }
         Arrays.sort(nums);

          var str = nums[0];
        for(int i = 0 ;i <nums.length; i++)
        {
            var index = i+1;
            if(index == nums.length)
            {
                return false;
            }
           var temp = nums[index];
            if(str == temp)
            {
                return true;
            }
            str = temp;
        }
        return false;
    }
}