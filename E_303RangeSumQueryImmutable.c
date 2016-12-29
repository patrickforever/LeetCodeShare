struct NumArray {
    int *sumArray;
};

/** Initialize your data structure here. */
struct NumArray* NumArrayCreate(int* nums, int numsSize) {
    struct NumArray* array1;
    array1 = (struct NumArray* )malloc(sizeof(struct NumArray));
    array1->sumArray = (int*)calloc((numsSize+2),sizeof(int));
    for(int i=1;i<=numsSize;i++)
    {
        array1->sumArray[i] = array1->sumArray[i-1] + nums[i-1];
    }
    return array1;
}

int sumRange(struct NumArray* numArray, int i, int j) {
    return (numArray->sumArray[j+1]-numArray->sumArray[i]);
}

/** Deallocates memory previously allocated for the data structure. */
void NumArrayFree(struct NumArray* numArray) {
    free(numArray);
}
