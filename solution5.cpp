class Solution {
public:
    int arrangeCoins( int n) {
        if(n==0)
            return n;
        long int i=0;
        while(n>=(i*(i+1))/2) {
            i++;
        }
    return i-1;
        }
};
