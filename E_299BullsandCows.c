char* getHint(char* secret, char* guess) {
    int i ,sLength ,countA , countB;
    int *hashIndex ;
    char TempAnswer[10];
    char *answer;
    sLength = strlen(secret);
    hashIndex = calloc(10,sizeof(int));
    for(i=0,countA=0,countB=0;i<sLength;i++){
        if(secret[i] == guess[i])
            countA ++ ;
        else{
           if( hashIndex[secret[i]-'0']++ < 0 )
            countB ++;
           if(--hashIndex[guess[i]-'0'] >=0)
            countB ++;
        }
    }
    i=sprintf(TempAnswer,"%dA%dB",countA,countB);
    answer = calloc(i,sizeof(char));
    strcpy(answer,TempAnswer);
    return answer;

}
