void reverse(char *s)
{
    int i , sLength ;
    char temp;
    sLength = strlen(s);
    for(i=0;i<(sLength>>1);i++){
        temp = s[i];
        s[i] = s[sLength-i-1];
        s[sLength-i-1] = temp;
    }
}
char* addBinary(char* a, char* b) {
    int n1Length , n2Length , i , answerStep ,maxLength ,num1Value, num2Value ,addNumber;
    char *answer ;
    n1Length = strlen(a);
    n2Length = strlen(b);
    maxLength = 2+ ((n1Length > n2Length )?n1Length:n2Length );
    answer = calloc(maxLength ,sizeof(char));
    answerStep = 0;
    addNumber = 0;
    reverse(a);
    reverse(b);
    for(i=0;i<maxLength-2;i++){
        if(i>=n1Length)
            num1Value =0;
        else
            num1Value = a[i]-'0';
        if(i>=n2Length)
            num2Value = 0;
        else
            num2Value = b[i]-'0';
        answer[i] = (char)(((addNumber+num1Value+num2Value)&1)+'0');
        addNumber = (addNumber+num1Value+num2Value)>>1;
    }
    if(addNumber){
        answer[i] = (char)(addNumber+'0');
        answer[i+1] = '\0';
    }
    else
        answer[i] = '\0';
    reverse(answer);
    return answer;
}
