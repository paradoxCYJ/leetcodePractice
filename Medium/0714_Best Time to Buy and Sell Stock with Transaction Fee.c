int max( int a, int b ){
    return a > b ? a : b;
}

int maxProfit(int* prices, int pricesSize, int fee){
    int profit = 0; // don't have stock
    int prev = -prices[0]; // have stock
    for( int i = 0; i < pricesSize; i++ ){
        profit = max( profit, prev + prices[i] - fee ); // max (not sale , sale)
        prev = max( prev, profit - prices[i] ); // max( don't buy stock, buy stock )
    }
    
    return profit;
}