char* longestCommonPrefix(char** strs, int strsSize)
{
    char *answer = "";
    int strLength, i, j;

    for (i=0; i < strsSize; i++)
    {
        strLength = strlen(strs[i]);
        char *strTemp = strs[i];
        if (i == 0)
        {
            answer = malloc(sizeof(char)*(strLength+1));
            strcpy(answer,strTemp);
        }
        else
        {
            for (j=0; j <strLength+1; j++)
            {
                if (answer[j] != strTemp[j])
                {
                    strTemp[j] = '\0';
                    strcpy(answer,strTemp);
                    break;
                }
            }
        }
    }
    return answer;
}
