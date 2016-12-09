bool repeatedSubstringPattern(char* str) {
    int i ,j , strLength;
    bool answer;
    strLength = strlen(str);
    for(i=1;i<strLength;i++){
        if(! (strLength%i)){
            answer = true;
            for(j=0;j<strLength;j++){
                if(str[j]  != str[j%i]){
                    answer = false;
                    break;
                }
            }
            if(answer)
                    return true;
        }
    }
    return false;
}
