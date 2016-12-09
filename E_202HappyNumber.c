int caculate(int n)
{
    int answer =0;
    while(n>0){
        answer += pow((n%10),2);
        n/=10;
    }
    return answer;
}
bool isHappy(int n) {
    bool store[10000]={0};

    int answer;
    answer = n;
    while(n!=1){
        answer = caculate(n);
        if(store[answer])
            return false;
        store[answer] =1 ;
        n = answer;
    }
    return true;
}
