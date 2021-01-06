bool judgeCircle(char * moves){
    int countY = 0;
    int countX = 0;
    
    while( *moves != '\0' ){
        switch( *moves ){
            case 'U' :
                countY++;
                break;
            case 'D' :
                countY--;
                break;
            case 'L' :
                countX++;
                break;
            case 'R' :
                countX--;
                break;
            default:
                break;
        }
        
        moves++;
    }
    return countY == 0 && countX == 0;
}