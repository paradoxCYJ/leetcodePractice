bool detectCapitalUse(char * word){
    bool result = false;
    int countUppercase = 0;
    for( int x = 0; x < strlen(word); x++ ){
        if( word[x] >= 'A' && word[x] <= 'Z' ){
            countUppercase++;
        }
    }
    
    if( countUppercase == 0 || countUppercase == strlen(word) ){
        result = true;
    }
    else if( countUppercase == 1 && word[0] <= 'Z' ){
        result = true;
    }
    return result;
    
}