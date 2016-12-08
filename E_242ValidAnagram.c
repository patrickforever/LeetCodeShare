bool isAnagram(char* s, char* t) {
    int *hashIndex;
    if(!s && !t)
        return true;
    if(strlen(s) != strlen(t))
        return false;
    int i ;
    hashIndex = calloc(128,sizeof(int));
    for(i=0;i<strlen(s);i++)
        hashIndex[s[i]-'0']++;
    for(i=0;i<strlen(t);i++)
        hashIndex[t[i]-'0']--;
    for(i=0;i<128;i++)
        if(hashIndex[i])
            return false;
    return true;
}
