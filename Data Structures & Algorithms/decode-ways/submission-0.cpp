class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();

        vector<int> dp(n + 1, 0);
        dp[n] = 1;  // Empty string has one valid decoding

        for (int i = n - 1; i >= 0; i--) {

            // A substring starting with '0' is invalid
            if (s[i] == '0') {
                dp[i] = 0;
                continue;
            }

            // Take one digit
            dp[i] = dp[i + 1];

            // Take two digits if valid (10-26)
            if (i + 1 < n && (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6'))) {
                dp[i] += dp[i + 2];
            }
        }

        return dp[0];
    }
};