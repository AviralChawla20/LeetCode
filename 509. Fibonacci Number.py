class Solution:
    def fib(self, n: int) -> int:
        if n==0:
            return 0
        elif n==1:
            return 1
        dp=[]
        for i in range(n+1):
            dp.append(0)
        dp[1]=1
        for i in range(2,n+1):
            dp[i]=dp[i-1] + dp[i-2]
        return dp[n]
        
