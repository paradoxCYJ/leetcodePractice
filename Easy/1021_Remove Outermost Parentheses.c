char * removeOuterParentheses(char * S){
    char *str = malloc(sizeof(char) * strlen(S));
    int type = 0;
    int index = 0;
    for (int i = 0;i < strlen(S); i++) {
        if (S[i]=='(') {
            type++;
            if (type != 1) {
                str[index++] = S[i];
            }
        }else{
            type--;
            if(type!=0){
                str[index++] = S[i];
            }
        }
    }
    str[index] = '\0';
    return str;
}