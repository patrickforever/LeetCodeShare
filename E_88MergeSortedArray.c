void merge(int* nums1, int m, int* nums2, int n) {
    int i=0 , j=0 , k=0;
    for(i=m-1,j=n-1,k=m+n-1;j>=0  ;){
        nums1[k--] = i>=0 && nums1[i]>nums2[j]? nums1[i--]: nums2[j--];
    }
}
