char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    int i , j , length;
    char** answer;
    answer = (char**) malloc(sizeof(char*)*n);
    length = 1 + strlen("FizzBuzz");
    for(i=0;i<n;i++)
        answer[i] = (int*) malloc(sizeof(char)*length);
    for(i=1;i<=n;i++){
        if( (i%3==0) && (i%5 == 0) )
            sprintf(answer[i-1],"%s","FizzBuzz");
        else if((i%3==0))
           sprintf(answer[i-1],"%s","Fizz");
        else if((i%5==0))
            sprintf(answer[i-1],"%s","Buzz");
        else
            sprintf(answer[i-1],"%d",i);

    }
    return answer;
}
