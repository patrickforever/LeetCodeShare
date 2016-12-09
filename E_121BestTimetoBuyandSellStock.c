int maxProfit(int* prices, int pricesSize) {
    int answer , cur  , low , high ,  temp  ;
    answer = cur = low = high = temp = 0;
    for(cur=0;cur<pricesSize;cur++){
        if(prices[low] > prices[cur])
            low = high = cur ;
        if(prices[cur] > prices[high])
            high = cur;
        if(high > low ){
            temp = prices[high] - prices[low];
            answer = answer>temp ? answer : temp;
        }
    }
    return answer ;
}
