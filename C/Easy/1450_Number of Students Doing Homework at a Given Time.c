/*

startTime.length == endTime.length
1 <= startTime.length <= 100
1 <= startTime[i] <= endTime[i] <= 1000
1 <= queryTime <= 1000

*/

int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime){
    int result = 0;
    while( startTimeSize > 0 ){
        
        if( endTime[startTimeSize - 1] >= queryTime 
           && startTime[startTimeSize - 1] <= queryTime ){
            result++;
        }
        
        startTimeSize-= 1;
    }
    
    
    return result;
}