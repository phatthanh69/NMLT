class Solution:
    def search(self, nums: List[int], target: int) -> int:
        index = 0
        while len(nums) > 1:
            mid = len(nums) // 2
            if target == nums[mid]:
                return mid + index
            if target > nums[mid]:
                nums = nums[mid:]
                index += mid
            else:
                nums = nums[:mid]
        if nums[0] == target:
            return index
        else:
            return -1
            