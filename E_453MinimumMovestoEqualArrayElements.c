int minMoves(int* nums, int numsSize) {
    int minNumber , i;
    long long int answer ;
    answer = 0;
    minNumber = nums[0];
    if(numsSize==1)
        return 0;
    for(i=0;i<numsSize;i++){
        answer += nums[i];
        if(minNumber > nums[i])
            minNumber = nums[i];
    }
    return (int)(answer-(numsSize*minNumber));
}
