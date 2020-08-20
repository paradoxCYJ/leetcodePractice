int firstUniqChar(char * s){
    
    int letter[26] = {0};
    char *tmp = s;
    while( *tmp != '\0' ){ 
        letter[ *tmp - 'a' ] += 1;
        tmp++;
    }
    int i = 0;
    while( *s != '\0' ){ 
        if( letter[*s-'a'] == 1 ){
            return i;
            
        }
        s++;
        i++;
    }
    return -1;
    
}