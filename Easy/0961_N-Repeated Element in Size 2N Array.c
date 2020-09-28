int repeatedNTimes(int* A, int ASize){
    
    int result = A[0];
    for( int i = 2; i < ASize; i++ ){
        if( A[i] == A[i - 1] || A[i] == A[i - 2] ){
            result = A[i];
            break;
        }
    }
    return result;
}