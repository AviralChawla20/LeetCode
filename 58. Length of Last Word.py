class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        x = s.split()
        # print(x)
        return len(x[-1])
        
