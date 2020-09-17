int climbStairs(int n){
    
    if( n < 3 ){
        return n;
    }
    
    int climb[2] = {1, 2};
    int tmp = 0;
    for( int i = 3; i < n; i++ ){
        tmp = climb[0] + climb[1];
        climb[0] = climb[1];
        climb[1] = tmp;
    }
    
    return climb[0] + climb[1];
}