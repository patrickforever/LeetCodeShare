int strStr(char* haystack, char* needle) {
    int lengthHay , lengthNeed , i , j , countSame;
    lengthHay = strlen(haystack);
    lengthNeed = strlen(needle);
    if((!lengthNeed))
        return 0;

    for(i=0;i<lengthHay;i++){
        countSame = 0;
        for(j=0;j<lengthNeed;j++){
            if( (i+lengthNeed) > lengthHay )
                return -1;
            if(haystack[i+j] == needle[j])
                countSame ++;
            if(countSame == lengthNeed)
                return i;
        }
    }
    return -1;
}
