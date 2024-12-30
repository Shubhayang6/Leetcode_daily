class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        Map = {}
        size = len(nums)
        
        for i in range(size):
            complement = target - nums[i]
            if complement in Map:
                return [Map[complement],i]
            Map[nums[i]] = i

        return []
        
            
        