
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(!digitsSize)
        return NULL;
    int i , *answer;
    i = digitsSize-1;
    while(i>=0){
        if(digits[i] < 9){
            digits[i] ++ ;
            *returnSize =  digitsSize;
            return digits;
        }
        else{
            digits[i] = 0;
            i--;
        }
    }
    answer =  calloc( (digitsSize+1) ,sizeof(int) ) ;
    answer[0] = 1;
    for(i=1;i<=digitsSize;i++)
        answer[i] = 0;
    *returnSize = digitsSize+1;
    return answer;
}
