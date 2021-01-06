char * toLowerCase(char * str){
    char *tmp = str;
    while( *tmp != '\0' ){
        *tmp = tolower(*tmp);
        tmp++;
    }
    
    return str;
}