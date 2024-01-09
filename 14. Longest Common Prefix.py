class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort(key=len)
        print(strs)
        p=strs[0]
        out=""
        c=[]
        for i in range(len(p)):
            c.append(0)
        for i in strs[1:]:
            for j in range(len(p)):
                if p[j]==i[j]:
                    c[j]+=1
        for i in range(len(c)):
            if c[i]==(len(strs)-1):
                out=out+p[i]
            else:
                break
        return out
