class Solution {
public:
    int integerBreak(int n) {
        if(n < 4) return n - 1;

        int rem = n % 3;
        int quot = n / 3;

        if(rem == 1) {
            rem = 4;
            quot--;
        }

        int best = pow(3, quot);
        if(rem) best *= rem;

        return best;
    }
};