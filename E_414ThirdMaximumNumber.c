void swap(long long int *x ,long long int *y)
{
    long long int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int thirdMax(int* nums, int numsSize)
{
    long long int max1 , max2 , max3 ;
    int i ;
    for(max1=max2=max3=LONG_MIN,i=0;i<numsSize;i++){
        if(max3>=nums[i] || max1==nums[i] || max2==nums[i])
            continue;
        max3=nums[i];
        if(max3 > max2)
            swap(&max3,&max2);
        if(max2 > max1)
            swap(&max2,&max1);
    }
    return max3==LONG_MIN?max1:max3;
}
