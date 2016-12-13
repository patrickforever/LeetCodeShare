uint32_t reverseBits(uint32_t n) {
    uint32_t answer = 0 , i;
    int step = 0;
    while(step < 32){
        i = n&1;
        answer <<=1;
        answer |= i;
        n >>=1;
        step ++;
    }
    return answer;
}
