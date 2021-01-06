int maxPower(char * s){

    int result = 1;
    int tmp = 1;
    for( int i = 1; s[i] != NULL; i++ ){
        if( s[i] != s[i-1] ){
            tmp = 1;
        }
        else{
            tmp += 1;
            result = tmp > result ? tmp : result;
        }
    }
    return result;
}