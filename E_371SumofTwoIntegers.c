int getSum(int a, int b) {
    while (a & b) {		// make sure some digit bigger than 2
        a = a ^ b;		// put bigger than 2 become zero
        b = ((a ^ b) & b) << 1;		// a^b is to reduct to oringinal a ,&b is to know which digit is left shift 1
    }
    return a ^ b;		// a always record no shift value b always record shift value
}
