char* convertToTitle(int n) {
    int i ,length ;
    char *answer ;
    length = 1;
    i = n-1;
    while(i>25){
        length ++ ;
        i = i/26-1;
    }

    answer = calloc(length , sizeof(char));
    for(i=length-1,n-=1;i>=0;i--, (n = n/26-1)){
        answer[i] = (char)((n%26)+'A');
    }
    answer[length]='\0';
    return answer;
}
