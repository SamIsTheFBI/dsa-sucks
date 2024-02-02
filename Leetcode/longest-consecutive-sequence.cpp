class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;

        int best = 0, len = 1;
        sort(nums.begin(), nums.end());
        for(int i=1; i < n; i++){
            if(nums[i] - nums[i-1] == 1) {
                len++;
            }
            else if(nums[i] - nums[i-1] > 1){
                best = max(len, best);
                len = 1;
            }
        }

        best = max(len, best);

        return best;
    }
};