char * defangIPaddr(char * address){
    char *result = malloc( strlen(address) + 7 );
    int r = 0;
    for( int i = 0; address[i] != '\0'; i++, r++ ){
        result[r] = address[i];
        if( address[i] == '.' ){
            result[r] = '[';
            result[r + 1] = '.';
            result[r + 2] = ']';
            r += 2;
        }
    }
    result[r] = '\0';
    return result;
}