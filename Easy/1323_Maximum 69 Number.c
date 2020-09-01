int maximum69Number (int num){
    if( num < 10 ) return 9;
    int maxSix = 0;
    int i = 0;
    int tmp = num;
    while( tmp % 10 > 0 ){
        i += 1;
        if( tmp % 10 == 6 ){
            maxSix = i;
        }
        tmp /= 10;
    }
    
    int add = maxSix > 0 ? 3 : 0;
    for( int x = maxSix - 1; x > 0; x-- ){
        add *= 10;
    }
    
    return num + add;
}