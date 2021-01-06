// You may assume k is always valid, 1 ≤ k ≤ array's length.

int cmp( void* a, void* b ){
    
    return *(int *)b - *(int *)a;
}

int findKthLargest(int* nums, int numsSize, int k){
    qsort( nums, numsSize, sizeof(int), cmp );
    return nums[k - 1];
}