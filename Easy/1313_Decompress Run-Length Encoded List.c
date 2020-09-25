/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    *returnSize = 0;
    for( int i = 0; i < numsSize; i += 2 ){
        *returnSize += nums[i];
    }
    int *result = (int*)malloc(sizeof(int)*(*returnSize));
    int count = 0;
    for( int i = 0; i < numsSize; i += 2 ){
        for( int j = nums[i]; j > 0; j-- ){
            result[count] = nums[ i + 1 ];
            count++;
        }
        
    }
    
    return result;
}