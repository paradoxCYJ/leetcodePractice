/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    int maxCandies = candies[0];
    bool *result = malloc( sizeof(bool) * candiesSize );
    
    for( int i = 1; i < candiesSize; i++ ){
        maxCandies = maxCandies > candies[i] ? maxCandies : candies[i];
    }
    for( int i = 0; i < candiesSize; i++ ){
        result[i] = ( candies[i] + extraCandies ) < maxCandies ? false : true;
    }
    
    return result;
}