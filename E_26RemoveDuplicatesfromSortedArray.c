int removeDuplicates(int* nums, int numsSize) {
    if(numsSize<1)
        return numsSize;
    int i , j ,answer ;
    j=nums[0];
    for(i=0,answer=1;i<numsSize;i++){
        if(j!=nums[i]){
            nums[answer-1] = j;
            answer ++;
            j = nums[i];
        }
    }
    nums[answer-1] = j;
    return answer;
}
