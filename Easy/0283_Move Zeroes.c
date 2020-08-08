void moveZeroes(int* nums, int numsSize){
    
    if( numsSize > 1 ){
        int x = 0;
        int y = 0;
        int tmp = 0;
        for( y = 0; y < numsSize; y++ ){
            if( nums[y] != 0 ){
                tmp = nums[x];
                nums[x] = nums[y];
                nums[y] = tmp;
                x++;
            }
            
        }
    }
    
}