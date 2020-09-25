int hammingDistance(int x, int y){
    int result = 0;
    int xy = x ^ y;
    while( xy ){
        if( xy & 1 ){
            result += 1;
        }
        xy >>= 1;
    }
    return result;
}