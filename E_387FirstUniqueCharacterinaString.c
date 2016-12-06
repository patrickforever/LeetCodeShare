int firstUniqChar(char* s) {
    //freopen("123.txt","w",stdout);
    int answerIndex[26];
    int i ,length , minAnswer;
    for(i=0;i<26;i++)
        answerIndex[i] = -1;
    length = strlen(s);
    if(length == 0)
        return -1;
    minAnswer = length;
    for(i=0;i<length;i++){
        if(answerIndex[ (s[i]-'a')] == -1)
            answerIndex[ (s[i]-'a')] = i;
        else
            answerIndex[ (s[i]-'a')] += length ;
    }
    for(i=0;i<26;i++){
        if( (answerIndex[i] != -1 ) && (minAnswer > (answerIndex[i])) ){
            minAnswer = answerIndex[i];
            //printf("ansIndex=%d\n",answerIndex[i]);
        }
    }
    if(minAnswer == length)
        return -1;
    else
        return minAnswer;
}
