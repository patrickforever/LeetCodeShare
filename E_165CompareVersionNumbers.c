int compareVersion(char* version1, char* version2) {
    int lengthVer1 , lengthVer2 , i=0 , j=0;
    int ver1Answer=0 , ver2Answer = 0;
    lengthVer1 = strlen(version1);
    lengthVer2 = strlen(version2);
    while(i<lengthVer1 || j< lengthVer2){
        while(i<lengthVer1 && version1[i]!='.'){
            ver1Answer = ver1Answer*10 + version1[i]-'0';
            i++;
        }
        while(j<lengthVer2 && version2[j]!='.'){
            ver2Answer = ver2Answer*10 + version2[j]-'0';
            j++;
        }
        if(ver1Answer > ver2Answer)
            return 1 ;
        else if(ver1Answer < ver2Answer)
            return -1;
        ver1Answer = 0 ;
        ver2Answer = 0;
        i++;
        j++;
    }
    return 0;
}
