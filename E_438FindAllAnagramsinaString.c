/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char* s, char* p, int* returnSize) {
    int i , j , sLength , pLength ,answerLength, index , start;
    int *answer  , *hashIndex;
    sLength = strlen(s);
    pLength = strlen(p);
    if(pLength > sLength)
        return NULL;
    hashIndex = calloc(26,sizeof(int));
    answer = calloc(sLength ,sizeof(int));
    for(i=0;i<pLength;i++)
        hashIndex[p[i]-'a'] ++;
    for(i=0,answerLength=0,start=0;i<sLength;i++){
        index = s[i]-'a';
        hashIndex[index]--;
        while(hashIndex[index]<0){
            hashIndex[s[start++]-'a']++;
            if(start >= sLength)
                break;
        }
        if( (i-start+1) == pLength){
           answer[answerLength++] = start;
        }
    }
    *returnSize = answerLength;
    answer = realloc(answer,answerLength*sizeof(int));
    return answer ;
}
