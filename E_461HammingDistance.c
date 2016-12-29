#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

int hammingDistance(int x, int y) {
    int temp , answer=0;
    temp = x ^ y ;
    while(temp)
    {
        if((temp&1))
            answer++;
        temp >>=1 ;
    }
    return answer;
}
