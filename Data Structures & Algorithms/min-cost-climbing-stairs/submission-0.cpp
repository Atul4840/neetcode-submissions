class Solution {
public:
    int solve(vector<int>& cost, vector<int>&dp, int i){
        if(i==0 || i==1){
            return 0;
        }
        if(dp[i]!=0) return dp[i];
       
        dp[i] = min(cost[i-1]+solve(cost, dp, i-1), cost[i-2]+ solve(cost, dp, i-2));
    
        return dp[i];
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,0);
        return solve(cost,dp,n);
    }
};
