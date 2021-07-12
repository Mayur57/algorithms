from typing import List


class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        L = [1] * len(nums)
        for i in range(1, len(L)):
            subp = [L[k] for k in range(i) if nums[k] < nums[i]]
            L[i] = 1 + max(subp, default=0)
        return max(L, default=0)


nums = [10, 9, 2, 5, 3, 7, 101, 18]
    
f = Solution()
print(f.lengthOfLIS(nums))