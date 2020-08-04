// http://www.cplusplus.com/reference/cctype/isalnum/
// isalnum: Check if character is alphanumeric

bool isPalindrome(char * s){
    int i = 0, j = strlen( s ) - 1;
    while (i < j) {
        while ( i < j && !isalnum( s[i] ) ) i++;
        while ( j > i && !isalnum( s[j] ) ) j--;
        if ( tolower( s[i++] ) != tolower( s[j--] ) ) return false;
    }     
   return true;
}


/* solution 2

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

*/