char* convert(char* s, int numRows) {
    int i ,newStep, length , gap , middleGap , currentStep;
    length = strlen(s);
    newStep = 0;
    gap = (numRows<<1) -2;
    char *answer;
    answer = (char*)malloc(sizeof(char)*(length+1));
    if(gap == 0){
        strcpy(answer,s);
        return answer ;
    }
    for(i=0;i<numRows;i++){
        currentStep = i;
        middleGap = gap - (i<<1) ;

        while( currentStep < length ){
            answer[newStep] = s[currentStep];
            newStep ++;
            if( ((i!=0) && (i!=numRows-1)) == 1){
                if( (currentStep+middleGap) < length){
                    answer[newStep] = s[currentStep+middleGap];
                    newStep++;
                }
            }
            currentStep += gap;
        }
    }
    answer[newStep]='\0';
    return answer;

}
