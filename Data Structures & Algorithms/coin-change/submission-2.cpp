class Solution {
   public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (coin <= i) {
                    // We are allowed to use this coin!
                    int remain = i - coin;
                    int min_coin_need = dp[remain];
                    int curret_hold = min_coin_need + 1;
                    // Now we calculate the minimum coins for this path.
                    dp[i] = min(dp[i], curret_hold);
                }
            }
        }

       return dp[amount] == amount + 1 ? -1 : dp[amount];    }
};
