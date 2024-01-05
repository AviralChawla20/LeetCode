class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        t=[]
        for l in range(0,len(nums)):
            t.append(0)
        for i in range(1,len(nums)):
            for j in range(0,i):
                if nums[j]<nums[i]:
                    t[i] = max(t[i],t[j]+1)
        return max(t)+1
        
