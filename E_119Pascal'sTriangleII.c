/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int i , j  , tempSize;

    int *answer;
    tempSize = rowIndex+1;
    answer = calloc(rowIndex+1 , sizeof(int));
    *returnSize =  tempSize;
    answer[0] = answer[rowIndex] = 1 ;
    for(i=1;i<(tempSize+1)/2;i++){
        answer[i] = answer[rowIndex-i] = ((long long int) answer[i-1]*(long long int)(rowIndex-i+1))/i;
    }
    return answer;
}
