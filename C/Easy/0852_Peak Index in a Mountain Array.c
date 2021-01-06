int peakIndexInMountainArray(int* arr, int arrSize){
    int max = arr[0];
    int result = 0;
    for( int i = 0; i < arrSize; i++ ){
       
        result = arr[i] > max ? i : result;
        max = arr[i] > max ? arr[i] : max; 
    }
    
    
    return result;
}