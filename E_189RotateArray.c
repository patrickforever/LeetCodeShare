void rotate(int* nums, int numsSize, int k) {
    int *newNums;
    int i , newStep ;
    newNums = calloc(numsSize,sizeof(*nums));
    k = k % numsSize;
    if(!k)
        return ;
    else{
        for(i=0;i<numsSize;i++){
            newStep = i+k;
            newStep %= numsSize;
            newNums[newStep] = nums[i];
        }
        for(i=0;i<numsSize;i++)
            nums[i] = newNums[i];

    }
}
