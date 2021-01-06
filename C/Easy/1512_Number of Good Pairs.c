/*

 * 1 <= nums.length <= 100
 * 1 <= nums[i] <= 100

*/

int numIdenticalPairs(int* nums, int numsSize){
    int *numsSet = calloc( 101, sizeof(int) );
    int result = 0;
    int i = 0;
    for( i = 0; i < numsSize; i++ ){
        numsSet[nums[i]] += 1;
    }
    int tmp = 0;
    i = 1;
    while( i < 101 ){
        if( numsSet[i] > 1 ){
            tmp = ( numsSet[i] ) * ( numsSet[i] - 1) / 2;
            result = result + tmp;
            
        }
        i++;
    }
    return result;
}