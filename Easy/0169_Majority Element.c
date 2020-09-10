
/*
* use Moore voting
*/
int majorityElement(int* nums, int numsSize){
    int count = 0;
    int result = -1;
    
    for( int i = 0; i < numsSize; i++ ){
        if( count == 0 ){
            result = nums[i];
        }
        count = result == nums[i] ? count + 1 : count - 1;
    }
    
    return result;
}