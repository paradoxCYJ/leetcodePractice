int min( int a, int b ){
    return a > b ? b : a;
}

int maxNumberOfBalloons(char * text){
    int letters[26] = {0};
    for( int i = 0; i < strlen(text); i++ ){
        letters[text[i] - 'a'] += 1;
    }
    
    // (l l o o) (b a n)
    int singleLetter = min(min( letters['a' - 'a'], letters['b' - 'a'] ), letters['n' - 'a']);
    int zweiLetter = min( letters['l' - 'a'] / 2, letters['o' - 'a'] / 2 );
    
    return min( singleLetter, zweiLetter ); 
}