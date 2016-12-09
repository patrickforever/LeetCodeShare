int giveValue(char inputChar)
{
    switch(inputChar)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
    return 0;
}
int romanToInt(char* s) {
    if(!s)
        return 0;
    int value1, value2 , sLength , i ,answer;
    sLength = strlen(s);
    for(i=0,answer=0;i<sLength;i++){
        value1 = giveValue(s[i]);
        value2 = giveValue(s[i+1]);
        answer += (value1 >= value2 ) ?(value1) :(-value1);
    }

    return answer;
}
