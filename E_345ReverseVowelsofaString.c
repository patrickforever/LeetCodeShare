char* reverseVowels(char* s) {
    int i ,vowCount, sLength , temp;
    sLength = strlen(s);
    int *vowArray;
    vowArray = calloc(sLength , sizeof(int) );
    for(i=0,vowCount=0;i<sLength;i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            vowArray[vowCount] = i;
            vowCount++;
        }
    }
    if(vowCount < 2)
        return s;
    else{
        for(i=0;i< (vowCount>>1);i++){
            temp = s[vowArray[i] ];
            s[vowArray[i]] = s[vowArray[vowCount-i-1]];
            s[vowArray[vowCount-i-1]] = temp;
        }
    }
    return s;
}
