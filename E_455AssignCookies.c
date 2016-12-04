int cmp(const void *a , const void *b)
{
    return *(int*)a-*(int*)b;
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    int i , j ,answer;
    answer = 0;
    qsort(g,gSize,sizeof(int),cmp);
    qsort(s,sSize,sizeof(int),cmp);
    for(i=0,j=0;i<sSize;i++){
        if(s[i] >= g[j]){
            //printf("s[i]=%d , g[j]=%d , j=%d\n",s[i],s[j],j);
            j++;
            answer++;
        }
        if(j>=gSize)
            break;
    }
   //printf("answer=%d\n",answer);
    return answer ;
}
