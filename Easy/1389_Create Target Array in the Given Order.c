

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    int *result = malloc( sizeof( int ) * numsSize );
    *returnSize = numsSize;
    
    int count = 0;
    for( int i = 0; i < numsSize; i++, count++ ){
        if( index[i] >= count ){
            continue;
        }
        
        for( int j = 0; j < i; j++ ){
            if( index[i] <= index[j] ){
                index[j] += 1;
            }
        }
        
    }
    
    for( int i = 0; i < numsSize; i++ ){
        result[index[i]] = nums[i]; 
    }
    
    
    
    return result;
}
