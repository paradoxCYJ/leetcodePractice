class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        # Two Point Approach
        left = 0
        right = len(height) - 1
        result = -1
        while left < right:
            result = max( result, min(height[right], height[left]) * (right - left) )
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1

        return result