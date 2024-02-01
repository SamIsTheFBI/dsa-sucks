class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = -9999999, sum = -9999999;
        for(int i=0; i < nums.size(); i++){
            sum = max(nums[i], sum + nums[i]);
            ans = max(sum, ans);
        }

        return ans;
    }
};