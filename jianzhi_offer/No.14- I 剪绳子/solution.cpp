class Solution {
public:
    int cuttingRope(int n) {
        vector<int> dp(n+1, 0);
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i<=n; i++){
            for (int k = 2; k <= i-1; k++){
                dp[i] = max(dp[i], max(k*(i-k), k*dp[i-k]));
            }
        }
        return dp[n];
    }
};