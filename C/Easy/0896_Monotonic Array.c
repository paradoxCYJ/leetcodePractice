bool isMonotonic(int* A, int ASize){
    if (ASize == 1) {
        return true;
    }
    
    int prev = A[0];
    bool is_asc = false;
    bool is_des = false;
    for (int i = 1; i < ASize; i++) {
        if (A[i] == prev) {
            continue;
        }
        if (A[i] > prev) {
            is_asc = true;
        } else {
            is_des = true;
        }
        prev = A[i];
        
        if (is_asc && is_des) {
            return false;
        }
    }
    return true;
}