bool isPowerOfFour(int num) {
    if( (num>0) && (num&(num-1))==0 && (num&0x55555555))
        return true;
    else
        return false;
}
