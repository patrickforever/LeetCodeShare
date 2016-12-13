bool isIsomorphic(char* s, char* t)
{
    char sMapToT[256]= {0};
    char tMapToS[256]= {0};
    int i=0, j, sLength;
    sLength = strlen(s);
    while(s[i])
    {
        if(!sMapToT[s[i]] && !tMapToS[t[i]])
        {
            sMapToT[s[i]] = t[i];
            tMapToS[t[i]] = s[i];
        }
        else
        {
            if(sMapToT[s[i]] != t[i] || tMapToS[t[i]]!=s[i])
                return false;
        }
        i++;

    }

    return true;
}
