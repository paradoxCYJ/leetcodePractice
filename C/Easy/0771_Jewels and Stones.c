int numJewelsInStones(char * J, char * S){
    int result = 0;
    
    int x = 0;
   
    while( S[x] != '\0' ){
         int y = 0;
        while( J[y] != '\0' ){
            result = S[x] == J[y] ? result+1 : result;
            
            y++;
        }
        x++;
    }
    return result;
}