int countPrimes(int n) {
    int i , j, sqarN;
    int answer;
    bool *isPrime;
    if(n<=2)
        return 0;
    isPrime = calloc(n,sizeof(bool));
    answer = 0;
    isPrime[0] = true;
    isPrime[1] = true;
    sqarN=sqrt(n);
    for(i=2;i<=sqarN;i++){
        if(isPrime[i] == 0){
            for(j=i*i;j<n;j+=i)
                if(!isPrime[j]){
                    isPrime[j] = 1;

                }
        }
    }
    for(i=0;i<n;i++)
        if(!isPrime[i])
            answer ++;
    free(isPrime);
    return answer;
}
