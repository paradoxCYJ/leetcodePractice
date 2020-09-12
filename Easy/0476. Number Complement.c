int findComplement(int num){
    int result = 0;
    int count = 0;
    int tmp = num;
    while( tmp > 0 ){
        if( tmp /= 2 > 0 ){
            result <<= 1;
        }
        result += 1;
        count++;
        tmp /= 2;
    }
    
    return result ^ num;
}