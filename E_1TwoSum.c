/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i , j;
    bool flag = 0;
    int *answer ;
    answer =(int *) malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j] == target){
                flag = 1;
                answer[0] = i;
                answer[1] = j;
                break;
            }
        }
        if(flag == 1)
            break;
    }
    return answer;
}
