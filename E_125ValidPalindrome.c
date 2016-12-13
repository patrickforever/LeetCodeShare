bool isPalindrome(char* s) {
    if(!s)
        return true;
    int i , sLength , newLength , match;
    sLength = strlen(s);
    for(i=0,newLength=0;i<sLength;i++){
        if( s[i]>= 'A' && s[i]<='Z'){
            s[newLength] = s[i]-'A'+'a';
            newLength++;
        }
        else if (s[i]>= 'a' && s[i]<='z'){
            s[newLength] = s[i];
            newLength++;
        }
        else if (s[i]>= '0' && s[i]<='9'){
            s[newLength] = s[i]-'0';
            newLength++;
        }
        else
            continue;
    }
    s[newLength] = '\0';
    for(i=0,match=0;i<(newLength>>1);i++){
        if(s[i] == s[newLength-1-i])
            match++;
    }
    if(match == (newLength>>1))
        return true;
    else
        return false;
}
