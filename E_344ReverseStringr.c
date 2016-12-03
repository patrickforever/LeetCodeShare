char* reverseString(char* s) {
    int i , length;
    char* answer;
    length = strlen(s);
    if(length == 0)
        return s;
    answer = (char*)malloc(sizeof(char)*(length+1));
    for(i=0;i<length;i++){
        answer[length-i-1] = s[i];
    }
    answer[length]='\0';
    return answer;
}
