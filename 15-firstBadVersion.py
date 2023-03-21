# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        k, left, right = 0, 1, n
        while left < right:
            mid  = (left + right) // 2
            if isBadVersion(mid):
                right = mid - 1
                k = mid
            else:
                right = right - 1
        return k    