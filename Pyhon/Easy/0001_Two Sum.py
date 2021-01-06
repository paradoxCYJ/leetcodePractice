class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # HashTable
        numsDictionary = dict()
        for i in range(len(nums)):
            if numsDictionary.__contains__(target - nums[i]):
                return [numsDictionary.get(target - nums[i]), i]
            else:
                numsDictionary[nums[i]] = i