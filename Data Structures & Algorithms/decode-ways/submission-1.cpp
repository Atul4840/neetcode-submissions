class Solution {
public:
    int numDecodings(string s) {
        // If string is empty or starts with 0, no valid decoding
    if (s.empty() || s[0] == '0')
        return 0;

    int n = s.length();

    // dp[i] = number of ways to decode first i characters
    vector<int> dp(n + 1, 0);

    // Base cases
    dp[0] = 1;   // Empty string
    dp[1] = 1;   // First character (already checked it's not '0')

    // Build the answer
    for (int i = 2; i <= n; i++) {

        // ------------------------
        // Choice 1: Decode one digit
        // ------------------------
        int oneDigit = s[i - 1] - '0';

        if (oneDigit >= 1 && oneDigit <= 9) {
            dp[i] += dp[i - 1];
        }

        // ------------------------
        // Choice 2: Decode two digits
        // ------------------------
        int twoDigit = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');

        if (twoDigit >= 10 && twoDigit <= 26) {
            dp[i] += dp[i - 2];
        }
    }

    return dp[n];
    }
};
