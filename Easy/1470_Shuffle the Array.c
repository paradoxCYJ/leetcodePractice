/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int *result = malloc( sizeof(int) * numsSize );
    for( int i = 0; i < n; i++ )
    {
        result[ 2 * i ] = nums[ i ];
        result[ 2 * i + 1] = nums[ n + i ];
    }
    return result;
}