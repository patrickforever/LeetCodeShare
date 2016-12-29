#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

bool isPowerOfThree(int n) {
    int maxMulti;
    return (n > 0) && ((int)(pow(3, 19)) % n == 0);
}
