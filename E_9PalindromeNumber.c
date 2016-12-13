bool isPalindrome(int x) {
    int answer  , i ,temp;
    if(x < 0)
        return false;
    if(x < 10)
        return true;
    temp = x ;
    answer = 0;
    while(temp){
        answer = answer*10+temp%10;
        temp/=10;
    }
    return (x==answer);
}
