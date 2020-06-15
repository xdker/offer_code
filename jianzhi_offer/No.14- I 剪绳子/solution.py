class Solution:
    def cuttingRope(self, n: int) -> int:
        dp = [0 for _ in range(n + 1)]  # dp[0] dp[1]其实没用
        dp[1] = 1  # 初始化
        dp[2] = 1
        for i in range(3, n + 1):
            for j in range(2,i):
                dp[i] =max(dp[i], max((i - j) * j, j * dp[i - j]))
        return dp[n]