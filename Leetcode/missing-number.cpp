class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = int(nums.size());
        int sum = 0;
        for(int Ai=0; i < n; i++) sum += nums[i];

        return (n*(n+1)/2) - sum;
    }

    
};