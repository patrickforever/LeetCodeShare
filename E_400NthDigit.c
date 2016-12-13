int findNthDigit(int n) {
    long long int length=1 , offset=9 , start=1 , answer;
    char temp[20];
    while(n > length*offset){
        n -= length*offset ;
        length++;
        offset *= 10;
        start *= 10;
    }
    answer = ((n-1)/length)+start;
    sprintf(temp,"%d",answer);
    return (temp[ (n-1)%length] -'0');
}
