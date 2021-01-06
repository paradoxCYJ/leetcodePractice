int bitwiseComplement(int N){
    int r = 1;
    // r:   1 
    // r:  10 |= 1  --->  11
    // r: 110 |= 1  ---> 111
    while (r < N) {
        r <<= 1;
        r |= 1;
    }
    return r ^ N;
}