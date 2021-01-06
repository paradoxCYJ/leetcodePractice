char * reverseOnlyLetters(char * S){
    int length = strlen(S);
    int x = 0;
    int y = length - 1;
    while( x < y ){
        if( !isalpha( S[x] ) ) x++;
        if( !isalpha( S[y] ) ) y--;
        if( isalpha( S[x] ) && isalpha( S[y] ) ){
            char tmp = S[x];
            S[x] = S[y];
            S[y] = tmp;
            x++;
            y--;
        }
    }
    
    
    return S;
}