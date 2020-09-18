

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *map = calloc( 101, sizeof(int) );
    int *result = calloc( numsSize, sizeof(int) );
    for( int i = 0; i < numsSize; i++ ){
        map[nums[i]] += 1;
    }
    
    for( int i = 1; i <= 100; i++ ){
        map[i] += map[i - 1];
    }
    for( int i = 0; i < numsSize; i++ ){
        
        if( nums[i] == 0 ){
            result[i] = 0;
        }
        else{
            result[i] = map[nums[i] - 1];
        }
        
    }
    
    free(map);
    
    return result;
}