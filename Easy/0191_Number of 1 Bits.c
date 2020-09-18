int hammingWeight(uint32_t n) {
    int result = 0;
    while(n > 0){
        result = ( n & 1 ) ? result+1 : result;
        
        n >>= 1;
    }
    
    return result;
}