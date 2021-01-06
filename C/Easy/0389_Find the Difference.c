char findTheDifference(char * s, char * t){
    char result = t[strlen(t) - 1];
    for( int i = 0; i < strlen(s); i++ ){
        result = s[i] ^ t[i] ^ result;
        
    }
    
    return result;
}