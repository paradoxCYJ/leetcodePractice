/**
 * Note: The returned array must be malloced, assume caller calls free().
 * 1 <= nums.length <= 1000
 * -10^6 <= nums[i] <= 10^6
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    for( int i = 1; i < numsSize; i++ ){
        nums[i] += nums[i - 1];
    }
    return nums;
}