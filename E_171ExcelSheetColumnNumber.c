int titleToNumber(char* s) {
    int i, length ,answer;
    length = strlen(s);
    answer = 0;
    while(*s){
        answer = (answer*26)+ ((*s++)-'A'+1) ;
    }
    return answer;
}
