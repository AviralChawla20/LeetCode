class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        min_price = prices[0]

        for i in prices:
            min_price = min(i,min_price)
            max_profit = max(max_profit, i-min_price)

        return max_profit

        # for i in range(0,len(prices)):
        #     for j in range(i+1,len(prices)):
        #         profit = prices[j]-prices[i]
        #         if profit>max_profit:
        #             # print(max_profit,profit)
        #             max_profit = profit
        
        # return max_profit
        
