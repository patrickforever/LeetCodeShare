int rob(int* nums, int numsSize) {
    if(!numsSize )
        return 0;
    if(numsSize==1)
        return nums[0];
    int answer , *chooseHouse , *notChooseHouse , i ;
    chooseHouse = calloc(numsSize,sizeof(int));
    notChooseHouse = calloc(numsSize,sizeof(int));
    chooseHouse[0] = nums[0];
    for(i=1;i<numsSize;i++){
        chooseHouse[i] = notChooseHouse[i-1]+nums[i];
        notChooseHouse[i] = chooseHouse[i-1];
        if(chooseHouse[i] < notChooseHouse[i])
            chooseHouse[i] = notChooseHouse[i];
    }
    return chooseHouse[numsSize-1];
}
