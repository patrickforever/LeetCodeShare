typedef struct hashList{
    int val;
    struct hashList *next;
}LIST;
bool containsDuplicate(int* nums, int numsSize) {
    int i, j ;
    int maxSize = numsSize-1;
    LIST *temp[numsSize];
    memset(temp,0,sizeof(LIST*)*numsSize);
    if(numsSize <2)
        return false;
    for(i=0;i<numsSize;i++){
        int index;
        LIST *p ;
        LIST *node = malloc(sizeof(LIST));
        node->val = nums[i];
        index = abs(nums[i])% maxSize;
        p = temp[index];
        node->next = p;
        temp[index] = node;
        while(p){
            if(p->val == node->val)
                return true;
            p = p->next ;
        }
    }
    return false;
}
