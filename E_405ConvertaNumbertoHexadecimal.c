char letter[17]="0123456789abcdef";
char* toHex(int num) {
    if(num==0)
        return "0";
    char *answer ;
    int i =0;
    answer = calloc(9,sizeof(char));
    answer[8] ='\0';
    while( (num) && i<8){
        answer[7-i] = letter[ (num&0x0000000f )];
        i++;
        num >>=4;
    }
    return answer+7-i+1;

}
