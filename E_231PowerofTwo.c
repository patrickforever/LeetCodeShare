bool isPowerOfTwo(int n) {
    long long int answer ;
    answer = (long long int )n;
    if(answer==0)
        return false;
    if( (answer & ((~answer)+1)) == answer)
        return true;
    else
        return false;
}
