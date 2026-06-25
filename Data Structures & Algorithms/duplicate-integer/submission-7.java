class Solution {
    public boolean hasDuplicate(int[] nums) {
        for(int i = 0 ;i <nums.length; i++)
        {
            var str = nums[i];
            for(int j = 0 ;j <nums.length; j++)
            {
            var str1 = nums[j];
                if(i != j)
                {
                    if(str == str1)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}