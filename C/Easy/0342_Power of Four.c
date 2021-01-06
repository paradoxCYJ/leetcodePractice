

bool isPowerOfFour(int num){
    // !( num & ( num - 1 ) ) => prove num = 2^n
    // ( ( num - 1 ) % 3 == 0 ) => 4^n - 1 % 3 == 0 
    // 4^n - 1 % 3 == 0 => prove by Binomial theorem
    
    return num > 0 && !( num & ( num - 1 ) ) && ( ( num - 1 ) % 3 == 0 );
}


/*

use while loop

while( num > 1 && num % 4 == 0 ){
   num /= 4;
}
    
   return num == 1;

*/