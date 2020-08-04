bool isPalindrome(char * s){
    bool result = true;
    int sLength = strlen(s);
    int newLength = 0;
    for( int i = 0; i < sLength; i++ ){
        if( isdigit( s[ i ] ) || isalpha( s[ i ] ) ){
            s[ newLength ] = tolower( s[ i ] );
            newLength++;
        }
    }
    
    for( int i = newLength; i < sLength; i++ ){
        s[i] = '\0';
    }
    
    for( int i = 0; i < newLength / 2; i++ ){
        if( s[ i ] != s[ newLength - 1 - i ] ){
            result = false;
            break;
        }
        
    }
    
    
    return result;
}