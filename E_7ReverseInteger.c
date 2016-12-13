int reverse(int x) {
    long long int llAnswer ;
    int remainder;
    llAnswer = 0;

    while(x != 0){
        llAnswer *= 10;
        remainder = x % 10;
        llAnswer += remainder;
        x /= 10;
        if((llAnswer > INT_MAX) || (llAnswer < INT_MIN))
            return 0;
    }

    return (int)llAnswer;

}
