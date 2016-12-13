int maxRotateFunction(int* A, int ASize) {
    int i , maxAnswer  , totalValue ,preValue;
    for(i=0,totalValue=0,maxAnswer=0;i<ASize;i++){
        totalValue += A[i];
        maxAnswer += A[i]*i;
    }
    preValue = maxAnswer;
    for(i=ASize-1;i>0;i--){
        preValue = preValue + totalValue - ASize*A[i];
        maxAnswer = (maxAnswer>preValue)?maxAnswer:preValue;
    }
    return maxAnswer;
}
