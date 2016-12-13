char* countAndSay(int n) {
    char answer[10000]="1";
    char *pAnswer ;
    int i , length , countSame , data ,tempStep=1;
    if(n<1)
        return NULL;
    while(--n){
        length = strlen(answer);
        char temp[10000];
        length = strlen(answer);
        for(i=0,tempStep=0;i<length;i++){
            countSame = 1;
            data = answer[i]-'0';
            while(answer[i] == answer[i+1] && (i+1)<length ){
                countSame ++;
                i++;
            }
            temp[tempStep++]=(char)countSame+'0';
            temp[tempStep++]=(char)data+'0';

        }
        temp[tempStep]='\0';
        strcpy(answer,temp);
    }
    pAnswer = calloc(tempStep,sizeof(char));
    strcpy(pAnswer,answer);
    return pAnswer;
}
