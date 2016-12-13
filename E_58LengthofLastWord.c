int lengthOfLastWord(char* s) {
    int i , sLength ,step = 0;
    if(!s)
        return 0;
    sLength = strlen(s) - 1;

    while(s[sLength]== ' ')
        sLength --  ;
    i = sLength;
    while(s[i]!=' ' && i>=0){
        i--;

    }
    return (sLength-i);
}
