bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low=1 , high = n , mid ;
    while(low < high){
        mid = low + ((high-low)>>1);
        isBadVersion(mid) ? (high=mid) : (low=mid+1);
    }
    return high;
}
