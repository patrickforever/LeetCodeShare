int climbStairs(int n) {
    if(n<=2)
        return n;
    int i ,step1, step2 ,answer;
    step1 = 1;
    step2 =2;
    for(i=3;i<=n;i++){
        answer = step1 + step2;
        step1 = step2;
        step2 = answer ;
    }
    return answer;
}
