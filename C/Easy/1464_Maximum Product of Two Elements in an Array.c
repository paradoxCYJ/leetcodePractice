/*

2 <= nums.length <= 500
1 <= nums[i] <= 10^3

*/

int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int maxProduct(int* nums, int numsSize){
    
    qsort(nums, numsSize, sizeof(int), cmp);
    return ( nums[numsSize-1] - 1 ) * ( nums[numsSize-2] - 1 ); 
}