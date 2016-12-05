int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
    int hashIndex[1000]={0};
    int maxSize , i;
    int *answer ;
    *returnSize = 0;
    if(!nums1 || !nums2)
        return NULL;
    for(i=0;i<nums1Size;i++){
        hashIndex[nums1[i]] = 1;
    }
    maxSize = (nums1Size>nums2Size)?nums1Size:nums2Size;
    answer = calloc(maxSize,sizeof(*nums1));
    for(i=0;i<nums2Size;i++){
        if(hashIndex[nums2[i]]==1){
            answer[(*returnSize)++] = nums2[i];
            hashIndex[nums2[i]]=0;
        }
    }
    return answer;
}
