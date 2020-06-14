class Solution:
    def findRepeatNumber(self, nums: List[int]) -> int:
        u_set=set()
        for i in nums:
            if i not in u_set:
                u_set.add(i)
            else:
                return i