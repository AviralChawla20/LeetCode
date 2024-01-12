class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=[0,0]
        for i in nums:
            temp = max(i+dp[0],dp[1])
            dp[0] = dp[1]
            dp[1] = temp
        return dp[1]
