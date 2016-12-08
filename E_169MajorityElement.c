int majorityElement(int* nums, int numsSize)
{
    int i,major , countSame;
    major = nums[0];
    countSame = 1;
    for(i=1;i<numsSize;i++){
        if(countSame <=0){
            major = nums[i];
            countSame =1;
            continue;
        }
        if(major == nums[i])
            countSame++;
        else
            countSame--;

    }
    return major;
}
