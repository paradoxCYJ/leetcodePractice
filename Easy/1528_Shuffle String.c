char * restoreString(char * s, int* indices, int indicesSize){
    char *result = calloc( indicesSize + 1, sizeof(char) );
    for( int i = 0; i < indicesSize; i++ ){
        result[indices[i]] = s[i];
    }
    
    return result;
}