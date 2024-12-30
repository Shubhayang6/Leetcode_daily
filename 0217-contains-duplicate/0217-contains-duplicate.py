class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        maps = set()

        for i in nums:
            if i in maps:
                return True
            maps.add(i)
        return False