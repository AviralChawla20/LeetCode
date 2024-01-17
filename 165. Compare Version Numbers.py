class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1 = version1.split('.')
        v2 = version2.split('.')
        print(v1)
        print(v2)

        for i in range(max(len(v1),len(v2))):
            revision1 = int(v1[i]) if i < len(v1) else 0
            revision2 = int(v2[i]) if i < len(v2) else 0
            
            if revision1 < revision2:
                return -1
            elif revision1 > revision2:
                return 1
    

        return 0