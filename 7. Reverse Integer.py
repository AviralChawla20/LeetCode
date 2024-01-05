class Solution:
    def reverse(self, x: int) -> int:
        s=[]
        ans=""
        xs = str(x)
        if (xs[0])=='-':
            s.append('-')
            xs = xs.replace("-","")
        print("xs: ",xs)
        for i in range(len(xs)):
            xs = int(xs)
            s.append(int(xs%10))
            xs=xs/10
        print(s)
        for i in s:
            ans = ans + str(i)
        ans = int(ans)
        if ((ans>=(-2**31)) & (ans <= ((2**31)-1))) :
            return ans
        return 0
        
