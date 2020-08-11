/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    *returnSize = ASize;
    int x = 0;
    int y = ASize - 1;
    while( x < y ){
        if( A[x] % 2 == 0 ) x++;
        if( A[y] % 2 != 0 ) y--;
        else{
            int tmp = A[x];
            A[x] = A[y];
            A[y] = tmp;
        }
    }
    
    return A;
}


 /* use qsort
int cmp( void *a, void *b ){
    int _modA = *(int*) a % 2;
    int _modB = *(int*) b % 2;
    
    if( ( _modA & _modB ) > 0 ){
        return 0;
    }
    
    else if( _modA == 0 ){
        return -1;
    }
    
    return 1;
}

int* sortArrayByParity(int* A, int ASize, int* returnSize){
    *returnSize = ASize;
    qsort( A, ASize, sizeof(int), cmp );
    
    return A;
}
*/