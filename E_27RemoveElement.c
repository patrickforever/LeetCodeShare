int removeElement(int* nums, int numsSize, int val) {
    int i ,newStep;
    for(i=0,newStep =0 ;i<numsSize;i++)
        if(val != nums[i])
            nums[newStep++] = nums[i];
    return newStep ;
}
