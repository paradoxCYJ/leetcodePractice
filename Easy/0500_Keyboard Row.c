/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** findWords(char ** words, int wordsSize, int* returnSize){
    *returnSize = 0;
    char **result = malloc( wordsSize * sizeof( char* ) );
    int alphabet[26] = 
    {
        1, 2, 2, 1, 0, 1, 1, 1, 0, 1, 1, // a-k
        1, 2, 2, 0, 0, 0, 0, 1, 0, 0, 2,
        0, 2, 0, 2
    };
    int i = 0;
    int j;
    int index, tmp, tmpLength;
    while( i < wordsSize ){
        j = 0;
        index = alphabet[tolower(words[i][0]) - 'a'];
        while( words[i][j] != '\0' ){
            tmp = alphabet[tolower(words[i][j]) - 'a'];
            if( tmp != index ){
                break;
            }
            j++;
        }
        
        if( tmp == index ){
            tmpLength = strlen(words[i]);
            result[*returnSize] = malloc( tmpLength * sizeof(char) + 1 );
            for( int a = 0; a < tmpLength; a++ ){
                result[*returnSize][a] = words[i][a];
            }
            result[*returnSize][tmpLength] = '\0';
            
            *returnSize = *returnSize + 1;
        }
        
        i++;
    }
    
    
    
    return result;
}