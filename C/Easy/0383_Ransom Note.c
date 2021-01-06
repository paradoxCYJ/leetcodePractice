

bool canConstruct(char * ransomNote, char * magazine){
    if( strlen( magazine ) < strlen( ransomNote ) ){
        return false;
    }
    
    int letter[26] = {0};
    for( int i = 0; magazine[i] != '\0'; i++ ){
        letter[ magazine[i] - 'a' ] += 1;
    }
    for( int i = 0; ransomNote[i] != '\0'; i++ ){
        letter[ ransomNote[i] - 'a' ] -= 1;
    }
    
    for( int i = 0; i < 26; i++ ){
        if(letter[i] < 0){
            return false;
        }
    }
    
    
    return true;
}