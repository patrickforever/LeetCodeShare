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
char* addStrings(char* num1, char* num2) {
    int n1Length , n2Length , i , answerStep ,maxLength ,num1Value, num2Value ,addNumber;
    char *answer ;
    n1Length = strlen(num1);
    n2Length = strlen(num2);
    maxLength = 1+ ((n1Length > n2Length )?n1Length:n2Length );
    answer = calloc(maxLength ,sizeof(char));
    answerStep = 0;
    addNumber = 0;
    reverse(num1);
    reverse(num2);
    for(i=0;i<maxLength-1;i++){
        if(i>=n1Length)
            num1Value =0;
        else
            num1Value = num1[i]-'0';
        if(i>=n2Length)
            num2Value = 0;
        else
            num2Value = num2[i]-'0';
        answer[i] = (char)(((addNumber+num1Value+num2Value)%10)+'0');
        addNumber = (addNumber+num1Value+num2Value)/10;
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
