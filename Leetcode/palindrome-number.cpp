class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        long long ans = 0;
        long long tmp = x;

        while(tmp){
            int rem = tmp % 10;
            ans = ans * 10 + rem;
            tmp /= 10;
        }

        return (ans == x);
    }
};