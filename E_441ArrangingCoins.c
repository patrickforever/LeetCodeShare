int arrangeCoins(int n) {
    long long int mid , low=1 , high = n;
    while(low < high){
        mid = low+ ((high-low+1)>>1);
        if( (((mid+1)*mid)>>1) >n )
            high = mid-1;
        else
            low = mid;
    }
    return high;
}
