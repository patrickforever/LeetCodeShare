int singleNumber(int* nums, int numsSize) {
    int i ;
    int answer = 0;
    for(i=0;i<numsSize;i++){
        answer ^= nums[i];
    }
    return answer;
}
