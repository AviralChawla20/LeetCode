class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans=[]
        for i in range(len(nums1)):
            ans.append(-1)
        print(ans)
        for i in range(len(nums1)):
            t = nums2.index(nums1[i])
            for j in range(t+1,len(nums2)):
                if nums2[j]>nums1[i]:
                    ans.insert(i,nums2[j])
                    break
        return ans[0:len(nums1)]
