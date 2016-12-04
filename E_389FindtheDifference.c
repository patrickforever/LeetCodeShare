char findTheDifference(char* s, char* t) {
    int sLength , tLength , answer , i;
    answer = 0;
    sLength = strlen(s);
    tLength = strlen(t);
    for(i=0;i<sLength;i++)
        answer ^= (int)s[i];
    for(i=0;i<tLength;i++)
        answer ^= (int)t[i];
    return (char)answer;
}
