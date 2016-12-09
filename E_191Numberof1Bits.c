int hammingWeight(uint32_t n) {
    int i , answer;
    for(i=0,answer=0;i<32;i++){
        if( (n& (1<<i)) > 0)
            answer ++;
    }
    return answer ;
}
