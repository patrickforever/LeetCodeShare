int trailingZeroes(int n) {
    long long int i;
    int answer ;
    for(i=1*5,answer=0;i<=n;i*=5){
        answer += n/i;
    }
    return answer;
}
