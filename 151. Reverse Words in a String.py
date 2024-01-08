class Solution:
    def reverseWords(self, s: str) -> str:
        n = s.split()
        print(n)
        ans=""
        for i in range(len(n)-1,-1,-1):
            if (i!=0):
                ans = ans + n[i] + " "
            else:
                ans=ans+n[i]
        return ans
