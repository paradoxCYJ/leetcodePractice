bool isRobotBounded(char * instructions){
    int goX = 0, goY = 0;
    int dir = 0;
    int i = 0;
    // dir = 0, north
    // dir = 1, west ...
    while( instructions[i] != '\0' ){
        if (instructions[i] == 'G') {
            goX += dir == 1 ? -1 : dir == 3 ? 1 : 0;
            goY += dir == 0 ? 1 : dir == 2 ? -1 : 0;
        } 
        else if (instructions[i] == 'L') {
            dir = (dir + 3) % 4;
        } 
        else {
            dir = (dir + 1) % 4;
        }
        i++;
    }
    
    
     return dir == 0 ? goX == 0 && goY == 0 : true;
}