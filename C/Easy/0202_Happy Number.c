 // FLOYD'S TORTOISE-HARE CYCLE-FINDING
 int sumOfSquares( int n ){
    int result = 0;
    int tmp = 0;
    for( int x = n; x > 0; x /= 10 ){
        tmp = x % 10;
        result += tmp*tmp;
    }
    return result;
}

bool isHappy(int n){
    int move1 = sumOfSquares( n );
    int move2 = sumOfSquares( move1 );
    while( move1 != move2 ){
        move1 = sumOfSquares( move1 );
        move2 = sumOfSquares( sumOfSquares( move2 ) );
    }
    

    return move1 == 1 ? true : false;
}