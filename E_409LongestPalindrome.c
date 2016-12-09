int longestPalindrome(char* s) {
    int answerIndex[60]={0};
    int i ,answer = 0;
    bool oneCount = 0;
    while(*s){
        answerIndex[(*s++ -'A')]++;
    }
    for(i=0;i<60;i++){
        if(answerIndex[i] > 0)
            answer += answerIndex[i]>>1;
        if( (answerIndex[i]&1) ==1)
            oneCount = 1;
    }
    if(oneCount == true)
        answer = (answer<<1) +1 ;
    else
        answer <<= 1 ;
    return answer;
}
