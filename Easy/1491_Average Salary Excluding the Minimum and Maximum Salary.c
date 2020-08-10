/*

3 <= salary.length <= 100
10^3 <= salary[i] <= 10^6
salary[i] is unique.
Answers within 10^-5 of the actual value will be accepted as correct.

*/

double average(int* salary, int salarySize){
    double result = 0;
    int tmpIndex = 0;
    int maxIndex = 0;
    int minIndex = 0;
    while( tmpIndex < salarySize ){
        maxIndex = salary[maxIndex] < salary[tmpIndex] ? maxIndex : tmpIndex;
        minIndex = salary[minIndex] > salary[tmpIndex] ? minIndex : tmpIndex;
        result += salary[tmpIndex];
        tmpIndex++;
    }
    
    return ( result - salary[maxIndex] - salary[minIndex] ) / (salarySize-2);
}