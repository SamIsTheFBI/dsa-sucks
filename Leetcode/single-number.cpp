class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(), nums.end());

        int i;
        for(i=0; i < n; i+=2){
            if(nums[i] == nums[i+1]) continue;
            else return nums[i];
        }
        return nums[i];
    }
};